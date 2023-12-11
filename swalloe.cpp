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

    hero()
    {
        cout << "this is the default constructor" << endl;
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
        strcpy(this->name, name);
    }

    void print(void)
    {
        cout << "thse name is : " << this->name << endl;
        cout << "the health is : " << this->health << endl;
        cout << "the level is : " << this->level << endl;
    }

    // copy constructor

    hero(hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }
};

int main()
{

    hero hello;
    hello.setHealth(20);
    hello.setLevel('A');
    char name[7] = "Deep";
    hello.setName(name);

    hello.print();
    cout << "----------------------" << endl;
    hero kalo(hello);
    cout << "this is kalo " << endl;
    kalo.print();

    cout << "----------------------" << endl;

    hello.name[0] = 'P';

    hello.print();
    cout << "----------------------" << endl;
cout << "this is kalo " << endl;
    kalo.print();
};