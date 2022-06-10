#include <iostream>
#include <cstring>

using namespace std;

typedef struct {
    char Name[30] = "기본값1";
    char MPhoneNum[20] = "기본값2";
} SAM;

int main(){
    SAM friend1, friend2;
    strcpy(friend1.Name, "김갑돌");
    strcpy(friend1.MPhoneNum, "010-8741-0000");

    cout << friend1.Name << endl;
    cout << friend1.MPhoneNum << endl;

    cout << friend2.Name << endl;
    cout << friend2.MPhoneNum << endl;
    return 0;
}