#include <iostream>
using namespace std;
/*private: 기본 접근 속성, 같은 멤버 내 에서만 접근 가능(기본)
protected: 클래스 상속에서 사용됨
public: 모든 위치에서 접근 허용
*/
class IntSample{
    public:
        void ShowScore();
        void setScore(const int s);
        int getScore();
    private:
        int Score;
};

void IntSample::ShowScore(){
    cout << "점수: " << Score << endl;
}

void IntSample::setScore(const int s){
    Score = s;
}

int IntSample::getScore(){
    return Score;
}

int main(){
    IntSample Obj;
    Obj.setScore(100);
    Obj.ShowScore();
    cout << "점수: "<< Obj.getScore()<< endl;
    return 0;
}