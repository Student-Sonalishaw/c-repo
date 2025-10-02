#include<iostream>
#include<string.h>
using namespace std;
 // Multi-level inheritance
class Person{
    public:
    string name;
    int age;
};

class Student : public Person{
    public: 
    int rollno;
};

class GradStudent : public Student{
    public:
    string researchArea;
};


int main(){
    GradStudent s1;
    s1.name = "Tony stark";
    s1.researchArea = "Quantam physics";
    cout<<"Name: "<<s1.name<<endl;
    cout<<"The area of reasearching is: "<<s1.researchArea<<endl;

    return 0;
}