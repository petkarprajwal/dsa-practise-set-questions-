#include<iostream>
using namespace std;

void byValue(int x) {
    x = 100;
}

void byReference(int &x) {
    x = 200;
}

void byPointer(int *x) {
    *x = 300;
}

int main() {
    int a = 10;
    cout << "Original: " << a << endl;

    byValue(a);
    cout << "After byValue: " << a << endl;

    byReference(a);
    cout << "After byReference: " << a << endl;

    byPointer(&a);
    cout << "After byPointer: " << a << endl;

    return 0;
}
/*
Feature	                        Pass by Value	                Pass by Reference (&)	                    Pass by Pointer (*)
What is passed?	            A copy of the variable	          The actual variable (reference)	        The address of the variable
Function declaration	        void f(int x)	                    void f(int &x)	                        void f(int *x)
Function call	                    f(a)	                            f(a)	                                f(&a)
Changes reflect back?	            ❌ No	                            ✅ Yes	                            ✅ Yes
Dereferencing needed?	            ❌ No	                            ❌ No	                            ✅ Yes (*x)
Can be NULL or dynamic?	            ❌ No	                            ❌ No	                            ✅ Yes
Used in C language?	                ✅ Yes	                            ❌ No	                            ✅ Yes
Used in C++?	                        ✅ Yes	                            ✅ Yes (preferred)	                ✅ Yes (for dynamic or low-level control)

*/