#include <iostream>
using namespace std;
class hero
{
    int deep;
    char ram;

public:
    int getdeep()
    {
        return deep;
    }
    void sethelth(int h)
    {
        deep = h;
    }
};

int main()
{
    hero h1;
    h1.sethelth(20);

    hero *b = new hero;
    b->sethelth(50);

    cout <<b->getdeep()<< endl;

}