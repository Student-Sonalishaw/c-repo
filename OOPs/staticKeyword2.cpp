#include<iostream>
#include<string.h>
using namespace std;
//Stactic variable for class
class A{
    public: 
       int x;

       void incX(){
          x = x+1;
       }
};

int main(){
    A obj;
    obj.x = 0; // if we make another obj then x is diff for every obj
    cout<<obj.x<<endl;
    obj.incX();
    cout<<obj.x<<endl;
    //if we used anything by static keyword then it's used liftime of code ended
    return 0;
}