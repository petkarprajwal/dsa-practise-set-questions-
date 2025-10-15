#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b; // range of numbers
    cout << "Enter the range (two numbers): ";
    cin >> a >> b;

    long long sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i * i * i; // cube of the number
    }

    cout << "Sum of cubes of numbers between " << a << " and " << b << " = " << sum << endl;
    return 0;
}
