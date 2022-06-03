#include <iostream>
#define TEST
using namespace std;

int main(){
    cout << "***************" << endl;
    #ifdef TEST
    cout << "TEST" << endl;
    #else
    cout << "***************" << endl;
    #endif
    return 0;
    /*
    ifdef는 define의 if문을 의미함
    define의 지정 명이 선언되어 있으면 ifdef의 문으로 존재하지 않으면 else로 실행됨 
    */
}