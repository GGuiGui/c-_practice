#include <iostream>
using namespace std;

int main(){
    int a=100;
    int *ra = &a;
    int &rb = a;
    double g = 2147483648;

    cout << a << endl;
    cout << *ra << endl;
    *ra = g;
    cout << g << endl;
    cout << a << endl;
    cout << *ra << endl;
    return 0;
}