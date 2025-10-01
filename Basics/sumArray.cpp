#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,1,2,3,9,8, 11,33}; // for initialization and declaration in same line size of array is not neccesory to given
    int n = sizeof(arr)/4; // 4 is for integers size and this is for any size of arrays. || // for print maximum by given array, this line same then,
    int sum = 0; // int mx = arr[0]; or, int mx = INT_MIN; also in min case we also used INT_MAX;
    for(int i=0; i<=n; i++){ // same 
        sum += arr[i]; // if (arr[i] > mx) mx = arr[i]; or, mx = max(mx,arr[i]);
    }
    cout<< sum; // cout<<mx;

    return 0;
}