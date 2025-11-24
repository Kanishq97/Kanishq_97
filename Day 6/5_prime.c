#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    int prime=1;
    if (n<=1)
    {
        prime=0;
    }  
    for (int i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
            prime=0;
            break;
        }    
    }
    if (prime==1)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not a prime number\n");
    }
         
}
