#include <iostream>
#include <cstring>

using namespace std;

struct FriendInfo{
    char Name[30];
    char MPhoneNum[20];
};

int main(){
    FriendInfo Friend1, Friend2;
    strcpy(Friend1.Name, "김갑돌");
    strcpy(Friend1.MPhoneNum, "010-8741-0000");

    cout << Friend1.Name << endl;
    cout << Friend1.MPhoneNum << "\n" << endl;

    cout << Friend2.Name << endl;
    cout << Friend2.MPhoneNum << "1\n" << endl;

    Friend2 = Friend1;

    cout << Friend2.Name << endl;
    cout << Friend2.MPhoneNum << endl;
    return 0;
}