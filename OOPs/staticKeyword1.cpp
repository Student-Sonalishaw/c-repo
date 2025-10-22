#include<iostream>
#include<string.h>
using namespace std;
//normal functions without static keyword
void fun(){
    int x = 0;
    cout<<"x: "<<x<<endl;
    x++;
}
//Stactic variable for functions
void fun1(){
    static int y = 0; // for print this statement one time
    cout<<"y : "<<y<<endl;
    y++;
}
int main(){
    fun();//don't increases value
    fun();
    fun();
    fun1();
    fun1();
    fun1();//increased value because of static

    return 0;
}