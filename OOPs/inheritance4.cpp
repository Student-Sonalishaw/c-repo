#include<iostream>
#include<string.h>
using namespace std;
//Hierarchial inheritance
class Person{
    public:
    string name;
    int age;
};
class Student : public Person{
    public:
    int rollno;
};

class Teacher : public Person{
    public: 
    string subject;
};
int main(){
    //make any object person, student, teacher. let's make student object
    Student s1;
    s1.name = "Sonali";
    s1.age = 18;
    s1.rollno = 102;
    
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.rollno<<endl;

    return 0;
}