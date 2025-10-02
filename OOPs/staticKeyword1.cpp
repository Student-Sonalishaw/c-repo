#include<iostream>
#include<string.h>
using namespace std;
//Stactic variable for functions
void fun(){
    static int x = 0; // for print this statement one time
    cout<<"x : "<<x<<endl;
    x++;
}
int main(){
    fun();
    fun();
    fun();//increased value because of static

    return 0;
}