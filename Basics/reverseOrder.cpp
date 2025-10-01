#include<iostream>
using namespace std;

int main(){
    int arr[] = {12,3,6,2,29,18,230,8}; // when without using extra array by two pointer apporach means  by using two variables 
    int n = sizeof (arr)/4; // same the print the arr by using for loop then 
    int b[n]; // int i = 0; int j = n-1;
    for(int i=0; i<n; i++){ //while(i<j) { int temp = arr[i]; a[i] = a[j]; a[j] = temp; i++; j--}
        b[i] = arr[n-1-i]; // cout endl; then agin print the array by using for loop
        cout<<b[i]<<" ";// for loop is -> for(int i=0; i<n; i++){ cout<<arr[i]<<" ";}
    }

    return 0;
}