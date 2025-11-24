#include<stdio.h>
void fact(int n);
void sumofn(int n);
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter num\n");
    scanf("%d", &num);
    fact(num);
    sumofn(num);

    return 0;
}
void fact(int n)
{
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
void sumofn(int n)
{
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("Sum = %d\n", sum);

}

