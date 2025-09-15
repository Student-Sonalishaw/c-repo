#include<iostream>
using namespace std;
//fibonacci is 1 1 2 3 5 8 13..... so on like before two turms addition
int fibo(int n){
    if (n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<fibo(n);

    return 0;
}