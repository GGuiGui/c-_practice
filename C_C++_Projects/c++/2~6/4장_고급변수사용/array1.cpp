#include <iostream>
using namespace std;

int main(){
    int score[3] = {99,88,100}, i;
    cout << "score[0]의 주소 : " << &score[0] << endl;
    cout << "score[1]의 주소 : " << &score[1] << endl;
    cout << "score[2]의 주소 : " << &score[2] << endl;
    cout << endl;

    for (i=0;i<3;i++)   cout << "score[" << i << "]의 주소 :" << &score[i] << endl;

    cout << "score[0]의 값 : " << score[0] << endl;
    cout << "score[1]의 값 : " << score[1] << endl;
    cout << "score[2]의 값 : " << score[2] << endl;
    cout << endl;

    for (i=0;i<3;i++)   cout << "score[" << i << "]의 값 :" << score[i] << endl;
    
    return 0;
}