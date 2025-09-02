#include <iostream>
#include <string>
using namespace std;

#define NO_OF_CHARS 256

// Preprocess pattern to fill last occurrence of each character
void badCharHeuristic(const string &str, int size, int badchar[NO_OF_CHARS]) {
    for (int i = 0; i < NO_OF_CHARS; i++)
        badchar[i] = -1;

    for (int i = 0; i < size; i++)
        badchar[(int)str[i]] = i;
}

// Boyer-Moore search using only bad character heuristic
void search(const string &txt, const string &pat) {
    int m = pat.size();
    int n = txt.size();
    int badchar[NO_OF_CHARS];

    // Preprocess pattern
    badCharHeuristic(pat, m, badchar);

    int s = 0; // Shift of the pattern
    while (s <= (n - m)) {
        int j = m - 1;

        // Compare pattern from end
        while (j >= 0 && pat[j] == txt[s + j])
            j--;

        // Pattern found
        if (j < 0) {
            cout << "Pattern occurs at shift = " << s << endl;

            // Shift pattern to align with next possible match
            s += (s + m < n) ? m - badchar[txt[s + m]] : 1;
        } else {
            // Mismatch: shift pattern using bad character rule
            s += max(1, j - badchar[txt[s + j]]);
        }
    }
}

int main() {
    string txt = "ABAAABCD";
    string pat = "ABC";
    search(txt, pat);
    return 0;
}
