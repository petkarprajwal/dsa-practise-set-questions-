#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int getCelebrity(vector<vector<int>> v, int n) {
    stack<int> s;

    // Step 1: Push all persons into the stack
    for (int i = 0; i < n; i++) {
        s.push(i);
    }

    // Step 2: Find the potential celebrity
    while (s.size() > 1) {
        int i = s.top();
        s.pop();
        int j = s.top();
        s.pop();

        // If i knows j, then i cannot be celebrity
        if (v[i][j] == 1)
            s.push(j);
        else
            s.push(i);
    }

    // Step 3: Check the last candidate
    int celebrity = s.top();

    // Step 4: Verify candidate
    for (int i = 0; i < n; i++) {
        if (i != celebrity) {
            // Celebrity should not know anyone,
            // and everyone should know celebrity
            if (v[i][celebrity] == 0 || v[celebrity][i] == 1) {
                return -1;
            }
        }
    }

    return celebrity;
}

int main() {
    vector<vector<int>> v = {
        {0, 0, 1, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0}
    };
    int n = 4;

    int celeb = getCelebrity(v, n);

    if (celeb == -1)
        cout << "No celebrity found" << endl;
    else
        cout << "Celebrity is: " << celeb << endl;

    return 0;
}
