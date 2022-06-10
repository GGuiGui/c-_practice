#include <iostream>
#include <string>

using namespace std;

int main(){
    string newStr("ComputerScience"), Str("tist");
    //원하는 문자열 위치 찾기
    cout << newStr.find('e', 7) << endl;
    cout << newStr.find("Science") << endl;
    //swqp 
    newStr.replace(0,newStr.length()-newStr.find("Science"),Str);
    cout << newStr << endl;
    //compare 문자 같으면 0, 기준 문자가 크면 1, 작으면 -1, 길이가 같으나 다른 단어이면 그 외 랜덤한 숫자 반환
    string Str1("Computer"), Str2("Computee");
    cout << Str1.compare(Str2) << endl;
    //문자열 삽입
    string str1="AAA", str2="BBB";
    str1.insert(0,str2);//str1의 0번째에 BBB를 삽입
    cout << str1 << endl;
    str1.insert(3,3,'C');//'C'3개 연속으로 
    cout << str1 << endl;
}