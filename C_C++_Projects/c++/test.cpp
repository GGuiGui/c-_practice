#include <iostream>
using namespace std;

struct tagData
{
    char ID[20];
    char passWord[20];
};

int main(){
    tagData * p =new tagData[3];
    int i;
    for(i=0;i<3;i++){
        cout << i << endl;
        cin >> p[i].ID;
        cin >> p[i].passWord;
    }
    for(i=0;i<3;i++){
        cout << endl;
        cout << p[i].ID << endl;
        cout << p[i].passWord << endl;
    }
    delete []p;
    return 0;
}