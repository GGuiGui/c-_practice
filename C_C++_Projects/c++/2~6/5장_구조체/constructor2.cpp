#include <iostream>

using namespace std;

struct POINT{
    int x, y;
};
/*
struct RECT{
    POINT LeftTop;
    POINT RightBottom;
    int area;
};
*/
struct RECT{
    struct POINT LeftTop;
    POINT RightBottom;
    int area;
};


int main(){
    //RECT a;
    struct RECT a;

    a.LeftTop.x = 10;
    a.LeftTop.x++;

    a.RightBottom.x = 10;
    a.RightBottom.y = 100;

    cout << a.LeftTop.x << endl;
    cout << a.RightBottom.x << " " << a.RightBottom.y << endl;
    return 0;
}