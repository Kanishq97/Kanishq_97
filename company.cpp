#include<iostream>
#include<string>
using namespace std;

class Employee{
    protected:
        string name;
        string prjname;

    public:
        Employee(string n,string p) : name(n),prjname(p){}
        void display(){
            cout << "Name: " << name << ", Project Name: " << prjname;
        }           
};

class Lead : public Employee{


};

class HR : public 