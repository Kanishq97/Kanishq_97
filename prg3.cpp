#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream file("nonexistent.txt");

    if(!file){
        cout << "File not found!" << endl;
    }

    if (file.fail())
    {
        cout << "File operation failed!" << endl;
    }

    if (file.is_open()) 
    {
        cout << "File is open" << endl;
        file.close();
    }

    ifstream file2("example.txt");
    if (file2.good())
    {
        cout << "File is in goood state." << endl;
    } 
    return 0;
}
