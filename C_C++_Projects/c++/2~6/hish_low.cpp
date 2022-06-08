#include <iostream>

using namespace std;
#define n 10
void high_low(int *, int *);
int main(){
    int arr[n]= {0,}, sel_num[2], i;

    for(i=0;i<n;i++){
        cout << i+1 <<"번째 숫자 입력: ";
        cin >> arr[i];
        if (i<2)    sel_num[i] = arr[i];
    }

    high_low(sel_num, arr);

    cout << "가장 큰수: " << sel_num[0] << endl;
    cout << "가장 작은수: " << sel_num[1] << endl;
    return 0;
}

void high_low(int * ptr_arr, int * ptr){
    int i;
    for(i=0;i<n;i++){
        if (*ptr_arr<ptr[i])  *ptr_arr=ptr[i];
        if (*(ptr_arr+1)>ptr[i])  *(ptr_arr+1)=ptr[i];
    }
}