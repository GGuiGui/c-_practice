#include <iostream>
using namespace std;

typedef struct{
    char Name[7];
    char MPhoneNum[20];
} SAM;

int main(){
    SAM a={"행복", "010-7777-3333"};
    SAM *pa;
    pa = &a;
    cout << "이름: " << a.Name << endl;
    cout << "이름: " << (*pa).Name << endl;
    cout << "이름: " << pa->Name << endl;

    cout << "전화변호: " << pa->MPhoneNum << endl;

    return 0;
}