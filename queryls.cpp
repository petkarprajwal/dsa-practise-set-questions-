#include <iostream>
using namespace std;

int main() {
    int n, m;

    // Input size of array
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    // Input elements of array
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Input number of queries
    cout << "Enter number of queries: ";
    cin >> m;

    int q[m];

    // Input query elements
    cout << "Enter the query elements: ";
    for (int i = 0; i < m; i++) {
        cin >> q[i];
    }

    int totalLeft = 0;
    int totalRight = 0;

    for (int i = 0; i < m; i++) {
        int x = q[i];

        // Count from left to right
        int leftComp = 0;
        for (int j = 0; j < n; j++) {
            leftComp++;
            if (a[j] == x)
                break;
        }

        // Count from right to left
        int rightComp = 0;
        for (int j = n - 1; j >= 0; j--) {
            rightComp++;
            if (a[j] == x)
                break;
        }

        totalLeft += leftComp;
        totalRight += rightComp;
    }

    cout << "Total comparisons (Left to Right): " << totalLeft << endl;
    cout << "Total comparisons (Right to Left): " << totalRight << endl;

    return 0;
}
