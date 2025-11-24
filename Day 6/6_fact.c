#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num=0;
    long long fact=1;
    printf("Enter a number\n");
    scanf("%d", &num);
    while (num>=1)
    {
        fact=fact*num;
        num--;
    }
    printf("Factorial:%lld\n", fact);
    return 0;
}
