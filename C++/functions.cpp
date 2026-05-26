#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//void,return,parameterised,non parameterised

int sum(int a,int b)
{
    int result=a+b;
    cout << result;
}
int main(){
    int x,y;
    cout << "Enter two numbers\n";
    int i=1;
    while (i)
    {    
        cin >> x >> y;
        sum(x,y);  
        i+=1;  
    }
    return 0;
}

/*void printName(string name)
{
    cout << "hey  " << name << endl;
}

int main()
{
    string name;
    cin >> name;
    printName(name);
    return 0;
}*/
