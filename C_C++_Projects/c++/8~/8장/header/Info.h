#ifdef _INFO_
#include <iostream>
using namespace std;
class Info_person{
    public:
        void Setinfo(const double h, const double w);
        void Showinfo();
        void State();

    private:
        double height, weight;
        int state;
};
#else
#endif