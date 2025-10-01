#include <iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter n: ";
   cin>>n;

    int sum = 0;
    while(n != 0){
        int ld = n % 10;
        n = n/10; //for reverse sum==reverse && then initialize ld then reverse *=10 then reverse += 10 then n /= 10 then cout reverse
        sum+=ld;
    }
    cout<<"The sum of all digits is: "<<sum<<endl;

    return 0;

}