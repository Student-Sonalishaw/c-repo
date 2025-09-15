#include<iostream>  // if interviewer want without using extra veriable
using namespace std; // then, line 12
//using function
//void swap(int& x, int& y) [int& valid in c++ not c]
//{int temp = x;
   // x = y; 
   // y = temp} now line 12
int main(){
    int x = 2; //  using pointers 
    int y = 3;  //int* p = &x;
    cout<<x<<" "<<y<<endl; // int* q = &y;
      int temp = x; //(x=x+y; swap(x,y) then cout) || // *p = 3;
    x = y; //(y=x-y;) ||  // *q = 2 ;
     y = temp; x=x-y;// now cout || //cout<<x<< " "<<y<<endl;
    cout<<x<<" "<<y<<endl;

    return 0;
}