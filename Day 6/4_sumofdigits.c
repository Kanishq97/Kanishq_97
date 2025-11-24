#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,sum=0;
    printf("Enter a number\n");
    scanf("%d", &n);
    int d=0;
    while (n!=0)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
    }
    printf("Sum of the digits is %d\n",sum);
    
    return 0;
}
