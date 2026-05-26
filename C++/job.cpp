#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    string name;
    cout << "Enter name of the Person\n";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    if (age<18){
        cout << "You are not eligible for the job\n";
    }
    else if(age<=54)
    {
        cout << "Eligible for the job\n";
    }
    else if(age<=57)
    {
        cout << "Eligible for the job,but retirement soon\n";
    }
    else{
        cout << "Retirement time";
    }
    return 0;
}
