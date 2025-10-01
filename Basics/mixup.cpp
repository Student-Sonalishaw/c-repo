#include <iostream>
using namespace std;

int main(){
   //rows -> n; cols -> n;
   int n;
   cout<<"Enter alphabet: ";
   cin>> n;

   for(int i = 1; i <= n; i++){ //rows ->n
    if( i % 2 != 0){
      for(int j = 1; j <= i; j++){ //odd row->print numbers
        cout<< j << " ";
    }
    } else{for(int j = 1; j <= i; j++){ //odd row->print letters
        cout<< char ('A' + j - 1) << " ";
    }
}
    cout<<endl;
   }
    return 0;

}