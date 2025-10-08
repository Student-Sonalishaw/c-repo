#include<iostream>
using namespace std;

int main(){
    int x = 3;
    int *ptr = &x; //&x is the adress of x, &ptr is also printed the adress of x
    cout<<&x<<endl; //int* is the pointer for store the adress of x
    cout<<ptr<<endl;// if we print *ptr, so *ptr is the value of x without using x.
    // if we want to change the value of x without using x then,
    // *ptr = 23;
    //cout<<x<<endl;

    return 0;
}