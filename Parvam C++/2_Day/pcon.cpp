#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
      string name;
      int age;
      double cgpa;
    
    Student(string n,int a,double c){
        name=n;
        age=a;
        cgpa=c;
        cout << "Parameterised constructor called for " << name << endl;
    } 
    
    void display(){
        cout << name << endl << age << endl << cgpa << endl; 
    }
};

int main(){
    Student s1("Kanishq",19,9.1);
    Student s2= Student("Tommy",20,6.7);
    s1.display();
    s2.display();
}