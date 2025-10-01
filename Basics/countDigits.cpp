#include <iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter n: ";
   cin>>n;

    int count = 0;
    while(n != 0){
        n = n/10;
        count++;
    }
    cout<<"The count of digits is: "<<count<<endl;

    return 0;

}