/*
1. Fundamental concepts of C++
b. Concepts Covered: arguments to a function, Call by Value and Call by Reference.

Explanation:
    Call by Value:
        A copy of the variable is passed to the function.
        Changes inside the function do not affect the original variable.

    Call by Reference:
        The actual variable is passed using a reference (&).
        Any change inside the function directly affects the original variable.
*/

// INPUT
#include<bits/stdc++.h>
using namespace std;
void cv(int x){
    x += 10;
    cout << "Inside callByValue, x = " << x << endl;
}
void cr(int &x){
    x += 10;
    cout << "Inside callByReference, y = " << x << endl;
}
int main(){
    int x = 5, y = 5;

    cout << "Before callByValue, x = " << x << endl;
    cv(x);
    cout << "After callByValue, x = " << x << endl;

    cout << "\nBefore callByReference, y = " << y << endl;
    cr(y);
    cout << "After callByReference, y = " << y << endl;
    return 0;
}
// OUTPUT
/*

Before callByValue, x = 5
Inside callByValue, x = 15
After callByValue, x = 5

Before callByReference, y = 5
Inside callByReference, y = 15
After callByReference, y = 15

*/
