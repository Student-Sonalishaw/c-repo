#include<iostream>
#include<string.h>
using namespace std;
//abstrucion
class Shape{ // abstract class  cause pure virtual function in it 
    virtual void draw() = 0; // pure virtual function = it's all child classes have to implemented this function
}; //abstract class cann't make objects

class Circle : public Shape{
    public: 
       void draw(){ //implemented pure virtual function
        cout<<"Drawing a circle\n";
       }
};//child classes of abstract class can make objects
int main(){
    Circle c1;
    c1.draw();

    return 0;
}