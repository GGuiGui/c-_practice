#include <iostream>

using namespace std;

typedef struct{
    char name[10];
    int total;
    char grade;
    int rank;
}Student;

int main(){
    int score, number, i, j;
    char* subject[3] = {"국어", "수학", "영어"};
    cout << "총 입력할 학생의 명수 입력: ";
    cin >> number;
    Student student[number];
    Student* temp, * ptr_std[number];
    /*delete student;   동적 할당된 student의 메모리 공간 삭제
    student = 0;    student의 주소를 0으로 재선언*/

    for (j=0; j < number; j++){
        cout << '\n' << j+1 << "번째 학생의 이름 입력: ";
        cin >> student[j].name;

        cout << '\n' << student[j].name << "학생의 점수를 입력하세요" << endl;
        student[j].total = 0;
        student[j].grade = 'A';
        
        for(i=0;i<sizeof(subject)/sizeof(subject[0]);i++){
            cout << subject[i] << "과목의 점수를 입력하세요: ";
            cin >> score;
        
            if (score<0 || score > 100){
                cout << "점수를 잘못 입력하셧습니다(음수 or 100초과)" << endl << "재입력으로 돌아갑니다" << endl;
                i--;
                continue;
            }
        
            student[j].total += score;
        }

        if (student[j].total >= 270)   student[j].grade='A';
        else if (student[j].total >= 240)   student[j].grade='B';
        else if (student[j].total >= 210)   student[j].grade='C';
        else    student[j].grade='D';
        ptr_std[j] = &student[j];//주소값을 복사해두기
    }

    for (i=0; i<number-1; i++){
        for(j=i+1;j<number;j++){
            if((*(ptr_std[i])).total < (*(ptr_std[j])).total){
                temp = (ptr_std[i]);
                (ptr_std[i]) = (ptr_std[j]);
                (ptr_std[j]) = temp;
            }
        }
    }

    for ( j=0; j<number; j++)  {
        (*(ptr_std[j])).rank = j+1;
        cout << endl << (*(ptr_std+j))->name << "학생의 점수는 " << (*(ptr_std+j))->total << "점이며 학점은 " << (*(ptr_std+j))->grade << "입니다." << endl;
        cout << "등수는 " << (*(ptr_std+j))->rank << "입니다." << endl;
    }
    return 0;
}