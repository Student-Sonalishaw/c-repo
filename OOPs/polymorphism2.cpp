#include<iostream>
#include<string.h>
using namespace std;
//Run time polymorphism
class Parent{
public:
     void getInfo(){
        cout<<"parent class\n";
    }
    virtual void hello(){ //virtual function
        cout<<"Hello from parent\n";
    }
};

class Child : public Parent{
public:
   void getInfo(){
        cout<<"child class\n";
    }
     void hello(){ //virtual function which impliment by parent class
        cout<<"Hello from child\n";
    }
};
int main(){
    Child c1;
    c1.getInfo();//ovverride parent class same function
    c1.hello();//called during run time

    return 0;
}