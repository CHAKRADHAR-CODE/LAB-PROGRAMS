// 1. Fundamental concepts of C++ 
// a. Concepts Covered: Recursion is a process Develop a C++ Program to Find Factorial of a Given Number Using Recursion.

// INPUT
#include<bits/stdc++.h>
using namespace std;
int factorial(int x){
    if(x==0 || x==1) return 1;
    else return x*factorial(x-1);
}
int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Factorial of " << x << " is " << factorial(x) << endl;
    return 0;
}

// OUTPUT
/*

Enter a number: 5
Factorial of 5 is 120

*/
