#include<iostream>
#include<cmath>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i = 1; i<=x; i++){
        f *= i;
    }
    return f;
}

int nCr(int n, int r){
    return fact(n)/( fact(r)* fact(n-r));
}

int main(){
   int m;
   cout<<"Enter m: ";
   cin>>m;

   for(int i =0; i<=m; i++){
    for(int j=0; j<=m-i; j++){
        cout<<" ";
    }
    for(int j=0; j<=i; j++){
        cout<<nCr(i,j)<<" ";
    }
    cout<<endl;
   }
    return 0;
}