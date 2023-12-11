#include <iostream>
using namespace std;

class hero
{

    char name;
    int health;
    char level;

public:
    
    hero(int health, char level){
        this->health=health;
        this->level=level;
    };

    hero(hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(void){
        cout<<"the health is : "<<this->health<<endl;
        cout<<"the level is : "<<this->level<<endl;
    }

};

int main(){

    hero deep(30, 'a');
    deep.print();

    hero sam(deep);
    sam.print();

};