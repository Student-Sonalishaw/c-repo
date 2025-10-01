#include<iostream>
#include<string.h>
using namespace std;

class Student{
    public:
    string name;
    double cgpa;
    //Constructor
    Student( string name, double cgpa){
        this->name = name; //this is a pointer in c++ that points to the current object
        this->cgpa = cgpa;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"cgpa: "<<cgpa<<endl;
    }
};

int main(){
    Student s1("Sonali shaw",9.9);
    s1.getInfo();
    /* Student s2(s1);
    s2.getInfo(); */ //copy consructor

    return 0;
}