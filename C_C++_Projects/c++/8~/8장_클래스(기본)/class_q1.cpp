#define _INFO_
#include "./header/Info.cpp"

int main(){
    Info_person Info;
    double setting[2] = {0,};
    int i;
    for (i=0;i<2;i++){
        if (i==0)    cout << "키를 입력하세요: ";
        else    cout << "몸무게를 입력하세요: ";
        cin >> setting[i];
    }
    Info.Setinfo(setting[0],setting[1]);
    Info.State();
    Info.Showinfo();
    return 0;
}