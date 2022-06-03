#include <iostream>
using namespace std;

int main(){
    int a = 100;
    int *pa;
    pa = &a;
    cout << "a에 저장된 값: " << a << endl;
    cout << "a의 주소: " << &a << endl;

    cout << "pa를 통한 접근 값: " << *pa << endl;
    cout << "pa의 주소: " << pa << endl;
    
    return 0;
}