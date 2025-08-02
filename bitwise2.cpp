// how to find the number is power of 2 without using any loops 
#include <iostream>
using namespace std;

bool is_power(int n) {
    if (n > 0) {
        if ((n & (n - 1)) == 0)  // ✅ correct condition
            return true;
        return false;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (is_power(n))
        cout << n << " is a power of 2." << endl;
    else
        cout << n << " is not a power of 2." << endl;

    return 0;
}
