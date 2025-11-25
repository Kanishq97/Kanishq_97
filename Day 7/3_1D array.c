#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5];
    printf("Enter a number:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elememts:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d value is : %d\n",i+1,arr[i]);
    }
    
    return 0;
}
