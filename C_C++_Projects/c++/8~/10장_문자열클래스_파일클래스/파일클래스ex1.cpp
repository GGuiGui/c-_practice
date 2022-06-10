#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ifstream input;
    int n=0;
    string str1 = "";
    input.open("test.txt");
    if (input.fail())   return 1;//fail()은 파일을 여는데 성공하면 false를 실패시 true를 리턴한다
    while (input.eof() == false){
        input >> str1; 
        n++;
    }  
    input.close();
    ifstream input2;
    input2.open("test.txt");
    string * str2 = new string[n];
    for(int i=0;i<n;i++){
        input2 >> str2[i];
        cout << str2[i] << endl;
    }
}