#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    cout << "Enter the name of the student: " << endl;
    cin >> name;
    float marks;
    cout << "Enter the marks: " << endl;
    cin >> marks;
    if (80>=marks<=100){
        cout << "Grade A\n";
    }
    else if (60>=marks<=79)
    {
        cout << "Grade B\n";
    }
     else if (50>=marks<=59)
    {
        cout << "Grade C\n";
    }
     else if (45>=marks<=49)
    {
        cout << "Grade D\n";
    }
     else if (25>=marks<=44)
    {
        cout << "Grade E\n";
    }
    else{
        cout << "Grade F";
    }   
    return 0;
}
