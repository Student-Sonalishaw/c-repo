#include<iostream>
using namespace std;

int main(){
    //let 5 size of integers -> input the values and then print output
    int arr[5]; // declaration || we also do declaration and initialization in same line follow bellow for that
    cout<<"Enter array's elements: "; // int arr[5] = {4,5,7,4,8}  -> its without taking input 
    for(int i=0; i<=4; i++){ // then follow in line 11 to end.
        cin>>arr[i]; //|| in functions arrays are in pass by reference not value
    }
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}