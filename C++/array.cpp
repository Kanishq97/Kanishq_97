#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    int arr[5]={10,20,30,40,50};
    cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4]; 
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    cout << a[0] << a[1] << a[2] << a[3] << a[4]; 

    int b[3];
    for (i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    cout << b[2];
    
    return 0;
}

