#include<iostream>
#include<string.h>
using namespace std;

class Student{
    public:
    string name;
    /* double cgpa; */
    double* cgpaPtr;
    //Constructor
    Student( string name, double cgpa){
        this->name = name; //this is a pointer in c++ that points to the current object
        /* this->cgpa = cgpa; */
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    //copy constructor made by own
    Student(Student &obj) {
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Sonali shaw",9.9);
    /* s1.getInfo(); */
     //copy consructor
    Student s2(s1);
    s2.getInfo(); 

    return 0;
}