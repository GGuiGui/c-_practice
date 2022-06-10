#include <iostream>
using namespace std;

int main(){
    char string[30] = "computer";
    int i;

    cout << string << endl;

    for (i=0;string[i] != '\0';i++) cout << string[i];
    cout << string[i] << endl;
    return 0;
}