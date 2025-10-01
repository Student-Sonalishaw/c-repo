#include<iostream>
using namespace std;
// print n number of sum using recursion || // for factorial || for power 
int sum(int n){ // int fact (int n) || // int power(int a, int b)
    if(n==1) return 1; // if (n==0|| n==1) return 1; || if(b==0) return 1;
    return n + sum(n-1); // return n * fact(n-1) then same || return a*pow(a,b-1);
}
int main(){
    int n; // int a; cout<<"Enter base: "; cin>>a;
    cout<<"Enter n: "; // int b; cout<<"Enter exponant or power: "; cin>>b;
    cin>> n;
    cout<<sum(n); // cout<<fact(n); || // cout<<power(a,b);

    return 0;
}