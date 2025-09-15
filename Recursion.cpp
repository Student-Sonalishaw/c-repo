#include<iostream>
using namespace std;
// print n to 1 by recursion || // print 1 to n (without using extra parameter)follow bellow
void print (int n){
    if(n==0) return;//Base case || // same
    cout<<n<<endl;// work || //print(n-1); that means call
    print(n-1);//call || //  cout<<n<<endl; that means work 
}

int main(){
    int n; // same for 1 to n also.
    cout<<"Enter n: ";
    cin>>n;
    print(n);

    return 0;
}