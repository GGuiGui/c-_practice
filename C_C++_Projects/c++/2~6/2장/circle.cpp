#include <iostream>

using namespace std;

int main(){
    int number;

    cout << "반지름을 입력하세요: ";
    cin >> number;

    cout << "원 둘레: " << number*3.14*2 << "\n원 면적: " << number*number*3.14;
    return 0;
}