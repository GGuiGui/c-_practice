#include <iostream>

using namespace std;

int main(){
    int num, result=1;
    cout << "팩토리얼 숫자 입력: ";
    cin >> num;

    for (;num>1;num--)  result *= num;

    cout << result << endl;
    return 0;
}
