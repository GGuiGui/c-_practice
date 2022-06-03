#include <iostream>
#define PI 3.14
using namespace std;

int main(){
    int age = 18, height, radius;
    float area;

    cout << "키를 입력하세요(정수): ";
    cin >> height;
    cout << "원의 반지름 입력(정수): ";
    cin >> radius;
    area = radius * radius * PI;
    cout << "나이: "<<age<< endl << "키: "<<height<< endl << endl;
    cout << "원의 반지름: " << radius << endl << "원의 넓이: " << area << endl;
    return 0;
}