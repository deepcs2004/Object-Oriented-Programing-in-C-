#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class hero
{

    char *name;
    int health;
    char level;


public:

    hero(){
        cout<<"this is the default constructor"<<endl;
        name = new char[100];
    }

    void setHealth(int health)
    {
        this->health = health;
    }

    void setLevel(int level)
    {
        this->level = level;
    }

    void setName(char name[])
    {
        strcpy(this->name , name);
    }

    void print(void){
        cout<<"thse name is : "<<this->name<<endl;
        cout<<"the health is : "<<this->health<<endl;
        cout<<"the level is : "<<this->level<<endl;
    }
};

int main()
{

    hero hello;
    hello.setHealth(20);
    hello.setLevel('A');
    char name[7] ="Deep";
    hello.setName(name);

    hello.print();

    hero kalo(hello);
    cout<<"this is kalo "<<endl;
    kalo.print();
};