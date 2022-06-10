#include <iostream>

using namespace std;

int TotalCalculation(int);
int main(){
    int count;
    cout << "입력할 과목의 숫자를 정해주세요: ";
    cin >> count;
    count = TotalCalculation(count);
    cout << "총 합계: " << count << endl;
    return 0;
}

int TotalCalculation(int cnt){
    int total = 0, number, i;
    if (cnt > 0){
        for (i = 1;i < cnt+1; i++){
            cout << i << "번째 점수 입력하세요: ";
            cin >> number;
            if (number < 0) return -1;
            total += number;
        }
    }
    else    total=-1;
    return total;
}