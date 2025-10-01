#include<iostream>
#include<string.h> // because we are using strings
using namespace std;
//syntax
class Teacher{ 
    //Encapsulation
    private: // access modifier just only inside class
    double salary;
    public: // access modifier to everyone
    //properties or attributes
    string name;
    string subject;
    string dept;

    // methods or member functions
    void changeDept(string newDept){
        dept = newDept; // if teacher changes their dept
    } // and so on functions if we want we can make

    // setter for when we want to acces private modifier things
    void setSalary(double s){
        salary = s;
    }
    //getter for when we wanted to print accessaible private modifier
    double getSalary(){
        return salary;
    }
};
int main(){
    //object creation
    Teacher t1; //constructor call for t1
    t1.name = "Shradha";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(50000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;

    return 0;
}