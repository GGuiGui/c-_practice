#ifdef _INTSAMPLE_H_

#include <iostream>
using namespace std;

class IntSample
{
    public:
        void ShowScore();
        void setScore(const int s);
        int getScore();

    private:
        int Score;
};

#else
#endif