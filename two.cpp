#include <iostream>
using namespace std;



class hero
{
    int deep;
    char ram;

public:
    
    // default costructor

    hero(){
        cout<<"this is me hero"<<endl;
    }

    // parametrisez costructor
    hero(int deep){
        cout<<"the adress of this: "<<this<<endl;
        this->deep =deep;
    }

    int getdeep()
    {
        return deep;
    }
    void sethelth(int h)
    {
        deep = h;
    };
};



int main()
{
    // hero h1(10);

    // cout<<"adress of h1: "<<&h1<<endl;
    // h1.getdeep();


    hero temp(20);
    cout<<temp.getdeep()<<endl;

    // h1.sethelth(20);

    // hero *b = new hero;
    // b->sethelth(50);

    // cout <<b->getdeep()<< endl;
}