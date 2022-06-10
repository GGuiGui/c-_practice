#include <iostream>

using namespace std;

int main(){
    int score;
    cout << "점수 입력: ";
    cin >> score;

    if (score >= 90)    cout << "A입니다" << endl;
    else if (score >= 80)   cout << "B입니다" << endl;
    else if (score >= 70)   cout << "C입니다" << endl;
    else if (score >= 60)   cout << "D입니다" << endl;
    else    cout << "F입니다" << endl;
    return 0;
}