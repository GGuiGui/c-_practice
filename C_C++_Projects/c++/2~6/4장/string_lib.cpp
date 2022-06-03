#include <iostream>
#include <cstring>
using namespace std;

int main(){
    /*char string[30] = "asdfadsf";
    int i=0;
    while(string[i] != '\0')    i++;
    cout << i <<endl;*/

    char s_string[100] = "C++ programming is very interesting!!!";
    char d_string[100], first[100] = "DDDDDD";

    cout << "s_string = " << s_string << endl;
    strcpy(d_string, s_string);
    cout << "d_string = " << d_string << endl;
    strcpy(d_string, first);
    cout << "d_string = " << d_string << endl;
    strncpy(d_string, s_string, 3);
    cout << "d_string = " << d_string << endl;

    strcat(d_string, s_string);
    cout << "d_string = " << d_string << endl;

    strncat(d_string, first, 4);
    cout << "d_string = " << d_string << endl;
    return 0;
}