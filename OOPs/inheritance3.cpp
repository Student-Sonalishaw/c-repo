#include<iostream>
#include<string.h>
using namespace std;
//Multiple inhertitance
class Student{
    public:
    string name;
    int rollno;
};

class Teacher{
    public: 
    string subject;
    double salary;
};
// TA class inherit student and teacher class both
class TA : public Student , public Teacher{
    public:
    string reasearchArea;
};
int main(){
    TA t1;
    t1.name = "Dip";
    t1.subject="Cs";//and so on
    t1.reasearchArea = "Ml";

    cout<<"Name: "<<t1.name<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    cout<<"Reasearch area is: "<<t1.reasearchArea<<endl;

    return 0;
}