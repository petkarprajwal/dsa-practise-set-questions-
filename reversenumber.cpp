#include <iostream>
using namespace std;

// WAF to reverse an integer n
int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        int digit = n % 10;       // extract last digit
        rev = rev * 10 + digit;   // append digit
        n = n / 10;               // remove last digit
    }
    return rev;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    int reversed = reverseNumber(num);
    cout << "Reversed number: " << reversed << endl;
    
    return 0;
}
