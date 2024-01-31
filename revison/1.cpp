#include <iostream>
#include <cstring>
using namespace std;

class hero
{
public:
    int a;
    char b;
    
    hero()
    {
        cout << "constructor called" << endl;
    }
    
    hero(int a){
        this->a = a;
    }

    hero(hero &temp){
        this->a = temp.a;
        this->b = temp.b;
    }

    void set(int a){
        this->a= a;
        
    }
        
    void print(){
        cout<<this->a<<endl;
        // cout<<this->b<<endl;
    }
};

int main()
{
    hero h1
    h1.set(20);
    h1.print();
}