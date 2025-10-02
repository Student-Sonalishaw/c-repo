#include<iostream>
#include<string.h>
using namespace std;
//Compile time polymorphism
class Print{
public:  
    void show(int x){
        cout<<"int: "<<x<<endl;
    }    
    void show(char ch){
        cout<<"char: "<<ch<<endl;
    }    
//same name but diff parameter in same class
};
int main(){
    Print p1;
    p1.show(102);
    p1.show('A');//decided in compile time

    return 0;
}