#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s_name("문자열");
    cout << s_name << endl;
    cout << "문자열 길이: " << s_name.length()<<endl;
    s_name+=" 클래스";
    //s_name.append("클래스"); => "+로 대체"
    cout << s_name << endl;
    cout << "문자열 길이: " << s_name.length() << endl;
    //문자열 추가 함수 assign => "="으로 대체
    //문자열 슬라이싱
    s_name.assign(s_name, 0, 10);
    cout << s_name << endl;
    cout << "문자열 수정 길이: " << s_name.length() << endl;
    //덧붙이기
    s_name.append(3, '!');
    cout << s_name << endl;
    cout << "문자열 수정 길이: " << s_name.length() << endl;
    //문자열 부분 삭제
    s_name.erase(9,s_name.length());
    //문자열 슬라이싱
    cout << s_name.substr(3,6) << endl;
    //at대신 []사용하기
    string str = "012345";
    for (int i=0;i<str.length();i++)    cout << str[i] << endl;
    //문자열 초기화
    s_name.clear();
    return 0;
}