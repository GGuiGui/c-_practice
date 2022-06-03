#include <iostream>
#define per 0.025
using namespace std;

int main(){
    int i;
    float delive_mo,  inmoney, delive_division;
    cout << "대출받는 금액(정수): ";
    cin >> delive_mo;
    delive_division = delive_mo/12;
    cout << "=====월별 납입금액=====" << endl;
    for(i = 1;i<13;i++){
        inmoney = delive_mo*per/12 + delive_division;
        cout << i << "째달 납입금액: " << inmoney << endl << endl;
        delive_mo -= delive_division;
        cout << "남은 금액: " << delive_mo << endl;
    }
    return 0;
}