#include<iostream>
using namespace std;


class Hero {
    int health;
    char level;

    public:

    void print(){
        cout<<"the health is : "<<health<<endl;
        cout<<"the level is : "<<level<<endl;
    }

    Hero(){
        cout<<"this is default constructor"<<endl;
    }

    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }

    
};


int main(){

    Hero Deep(20,'A');
    Deep.print();

    cout<<"---------------------"<<endl;
    
    Hero Bantu(Deep);
    Bantu.print();

};