#include "Info.h"

void Info_person::Setinfo(const double h, const double w){
    height = h;
    weight = w;
};

void Info_person::Showinfo(){
    cout << "키: " << height << "\n몸무게: " << weight << endl << "체중 상태: " << state << endl;
};

void Info_person::State(){
    if (height/weight > 2.4)    state=-1;
    else if (height/weight > 1.7)   state=0;
    else    state=1;
};