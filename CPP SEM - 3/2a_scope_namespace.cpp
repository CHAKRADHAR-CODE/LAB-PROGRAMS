/*
2 A
Develop a C++ program that demonstrates the use of the scope resolution operator and namespaces.
*/
// INPUT :
#include<bits/stdc++.h>
using namespace std;

int num = 10;
namespace my{
    int num = 20;
    void show(){
        cout << "Inside MySpace, num = " << num << endl;
    }
}
int main(){
    int num = 30;
    cout << "Local num = " << num << endl;
    cout << "Global num = " << ::num << endl;
    cout << "Namespace num = " << my::num << endl;
    my::show();

    using namespace my;
    cout << "\nAfter using namespace directive:" << endl;
    cout << "num from MySpace = " << my::num << endl;
    return 0;
}
// OUTPUT
/*
Local num = 30
Global num = 10
Namespace num = 20
Inside MySpace, num = 20

After using namespace directive:
num from MySpace = 20
*/
