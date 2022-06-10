#define _INTSAMPLE_H_
#include "./header/IntSample.cpp"

int main(){
    IntSample Obj;
    Obj.setScore(100);
    cout << "점수: " << Obj.getScore() << endl;
    return 0;
}