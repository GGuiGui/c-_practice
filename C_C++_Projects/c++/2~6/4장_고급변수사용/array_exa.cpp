#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char person_info[14];
    char year[5], month[3], day[3];
    cout << "주민번호 입력: ";
    cin >> person_info;
    if ((person_info[7] == '1') || (person_info[7] == '2')) strcpy(year, "19");

    else    strcpy(year, "20");

    strncat(year, person_info, 2);
    strncpy(month, (person_info+2), 2);
    strncpy(day, (person_info+4), 2);

    cout << "당신은 " << year << "년 " << month << "월 " << day << "일에 태어나셧습니다." << endl;
    return 1;
}