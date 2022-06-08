#include <iostream>
using namespace std;
class Salelnf{
    friend int CheckTax2(Salelnf &Obj);
    public:
        Salelnf(const double Income);
        double getTax();
    private:
        double Income;
        double Tax;
};

Salelnf::Salelnf(const double Income){
    this->Income = Income;
}
double Salelnf::getTax(){
    return Tax;
}

int CheckTax2(Salelnf &Obj){
    if (Obj.Income<=0)  return 0;
    Obj.Tax = Obj.Income*0.03;
    return 1;
}

int main(){
    Salelnf s1(20.4);
    cout << CheckTax2(s1) << endl;
    cout << "세금: " << s1.getTax() << endl;
    return 0;
}