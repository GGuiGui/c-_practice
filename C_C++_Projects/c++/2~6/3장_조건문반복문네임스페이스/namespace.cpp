#include <iostream>
namespace NS_1{
    int a= 200;
}

using namespace NS_1;
using namespace std;
int main(){
    int i;
    cout << "main() 벙위 입니다." << endl;
    for (i=0;i<3;i++){
        cout << "반복문 for의 범위입니다." << endl;
        cout << "i= " << i << endl;//0, 1, 2
        cout << "namespace NS_1의 a= " << a << endl;//200
        cout << "a= " << a << endl;//100
    }
    cout << "namespace NS_1의 a= "<< a << endl;
    cout << "a= " << a << endl;
    return 0;
}
