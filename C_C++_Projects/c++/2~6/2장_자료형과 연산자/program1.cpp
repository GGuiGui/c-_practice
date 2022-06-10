#include <iostream>
using namespace std;

int main(){
    int ko = 100, math = 98, eng = 79;
    cout << "total = " << ko+math+eng << endl;
    cout<<fixed;
    cout.precision(4);
    cout << "avg = " << (ko+math+eng)/3.0 << endl;
    return 0;
}