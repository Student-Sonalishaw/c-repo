#include <iostream>
using namespace std;

int main(){
   //rows -> n; cols -> n;
   int n;
   cout<<"Enter alphabet: ";
   cin>> n;

   for(int i = 1; i <= n; i++){ //rows ->
    for(int j = 1; j <= n; j++){ //cols ->n
        if(i==1|| i==n|| j==1|| j==n){
        cout<<"*";
        } else{cout<<" ";}
    }
    cout<<endl;
   }
    return 0;

}