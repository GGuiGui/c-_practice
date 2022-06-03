#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cout << "정수1 입력: ";
    cin >> num1;

    cout << "정수2 입력: ";
    cin >> num2;

    cout << "첫번째 정수 확인: " << num1 << "\n두번째 정수 확인: " << num2 << endl;
    cout << endl;
    cout << "합연산 확인: " << num1+num2 << endl;
    cout << "차연산 확인: " << num1-num2 << endl;
    cout << "곱연산 확인: " << num1*num2 << endl;
    cout << "나눔연산 확인: " << (double)num1/num2 << endl;    
    return 0;
}

