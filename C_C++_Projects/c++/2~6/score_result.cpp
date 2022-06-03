#include <iostream>

using namespace std;

typedef struct{
    int total = 0;
    char grade;
}Student;

int main(){
    int score, number, i, j, test[3];
    char* subject[3] = {"국어", "수학", "영어"};
    cout << "총 입력할 학생의 명수 입력: ";
    cin >> number;

    Student* student = new Student[number];

    for (j=0; j < number; j++){
        cout << j+1 << "번째 학생의 점수를 입력하세요" << endl;
        for(i=0;i<sizeof(subject)/sizeof(subject[0]);i++){
            cout << subject[i] << "과목의 점수를 입력하세요: ";
            cin >> score;
            if (score<0 || score > 100){
                cout << "점수를 잘못 입력하셧습니다(음수 or 100초과)" << endl << "재입력으로 돌아갑니다" << endl;
                i--;
                continue;
            }
            (student+j)->total += score;
        }
        if ((student+j)->total >= 270)   (student+j)->grade='A';
        else if ((student+j)->total >= 240)   (student+j)->grade='B';
        else if ((student+j)->total >= 210)   (student+j)->grade='C';
        else    (student+j)->grade='D';
    }
    for (;j>0;)  cout << j-- << "번째 학생의 점수는 " << (student+j)->total << "이며 학점은 " << (student+j)->grade << "입니다." << endl;
    return 0;
}