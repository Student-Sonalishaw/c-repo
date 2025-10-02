#include<iostream>
#include<string.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

     Person(string name, int age){
        this->name = name;
        this->age = age;
    } 

    /* Person(){
      cout<<"Parent constructor...\n";
    } */
   /*  ~Person(){ //destructor
        cout<<"Hii, i delete person occupied space.\n";
    } */
};

// single level Inheritance 
class Student : public Person {// after new class : any access modifier and class name which wanted to inherit
    //name.age,roll
    public:
    int rollno;

    Student(string name, int age, int rollno) : Person( name, age){ //constructor call
        /* cout<<"Child constructor...\n"; *///first call  is for parent constructor then call for child constructor and opposite in destructor
        this->rollno = rollno;
    }
    /* ~Student(){//destructor
        cout<<"Hii, i delete student occupied space.\n";
    }
 */
    void getInfo() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"RollNo: "<<rollno<<endl;
    }
};

int main(){
    Student s1("Sonali shaw",18,102);
    /* s1.name = "Sonali shaw";
    s1.age = 18;
    s1.rollno = 102; */

    s1.getInfo();

    return 0;
}