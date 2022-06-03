#include <iostream>

using namespace std;

int main(){
    int a;
    while (true){
        cout << "판별할 정수 입력: ";
        cin >> a;
        if (a==0)   break;
        if (a>100)  cout << "100보다 크다" << endl;
        else cout << "100보다 작다" << endl;
    }
    return 0;
}