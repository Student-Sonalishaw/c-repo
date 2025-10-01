#include <iostream>
using namespace std;

int main(){
   //rows -> n; cols -> n;
   int n;
   cout<<"Enter alphabet: ";
   cin>> n;

   for(int i = 1; i <= n; i++){ //rows ->
    for(int j = 1; j <= n; j++){ //cols ->n
        cout<<(char)(j+64)<<" ";
    }
    cout<<endl;
   }
    return 0;

}