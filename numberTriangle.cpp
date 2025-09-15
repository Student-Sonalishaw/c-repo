#include <iostream>
using namespace std;

int main(){
   //rows -> n; cols -> n;
   int n;
   cout<<"Enter alphabet: ";
   cin>> n;

   for(int i = 1; i <= n; i++){ //rows ->n
    for(int j = 1; j <= i; j++){ //cols ->n
        cout<< j << " ";
    }
    cout<<endl;
   }
    return 0;

}