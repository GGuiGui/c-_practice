#include <iostream>

using namespace std;

int main(){
    float number;
    int n, i, second;
    cout << "실수 입력: ";
    cin >> number;

    cout << "반올림 자릿수 입력: ";
    cin >> n;

    for (i=0;i<n;i++)   number *= 10;
    number = (number+5)/10;
    number = (int)number;
    /*if ((int)number % 10 >= 5)  number += 10 - (int)number%10;
    else    number -= (int)number%10;*/

    for (;i>1;i--)  number /= 10;

    cout << "반올림 결과값: " << number << endl;

    cout << 0/2 << endl;
    return 0;
}