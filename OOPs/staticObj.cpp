#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"Constructor calling."<<endl;
        }
        ~A(){
            cout<<"Destructor calling."<<endl;
        }
};

int main(){
    if(true){
        static A obj;
    }
    cout<<"End of main function."<<endl;

    return 0;
}