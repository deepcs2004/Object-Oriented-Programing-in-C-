#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class hero
{
    int health;
    char level;

public:
    char *name;

    // dafault const
    hero()
    {
        cout << "this is the default const" << endl;
        name = new char[100];
    }

    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    void setName(char name[])
    {
        char *ch = new char[strlen(name) + 1];
        strcpy(ch, name);
        this->name = ch;
    }

    void print(void)
    {
        cout << "My name is : " << this->name << endl;
        cout << "My health is : " << this->health << endl;
        cout << "My level is : " << this->level << endl;
    }
};

int main()
{

    hero h1(20, 'a');
    char name[7] = "Deep";
    h1.setName(name);

    h1.print();
};