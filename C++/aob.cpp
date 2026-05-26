#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
     string name;
     string email;
     double marks;

     Student()
     {
        name="Unknown";
        marks=0;
        email="Unknown";
    }
     Student(string n,double m,string e)
     {
        name=n;
        marks=m;
        email=e;
    }

     void display(){
        cout << name << ": " << email << ": " << marks << endl;
     }
};

int main()
{
    Student batch1[3]={Student("Vincent",95.67,"vincent@gmail.com"),
         Student("Leo",97.35,"leodas@gamil.com"),
         Student("Mike",96.69,"mikey@gmail.com")};
    cout << "Batch 1 (Stack Array):" << endl;
    for (int i = 0; i < 3; i++)
    {
        batch1[i].display();
    }
    
    Student* batch2 = new Student[3]{
        Student("Vikram",76.24,"vikram@gmail.com"),
        Student("Vikrant",88.72,"vikrant@gmail.com"),
        Student("Harshad",82.2546,"thebigbull@gmail.com")};
    cout << "Batch 2 (Heap Array):" << endl;
    for (int j = 0; j < 3; j++)
    {
        batch2[j].display();
    }
    delete[] batch2;
    return 0;
}
