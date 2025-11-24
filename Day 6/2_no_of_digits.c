#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    int count=0;
    while (num!=0)
    {
        int digit=num%10;
        count++;
        num=num/10;
    }
    printf("Number of digits is %d\n", count);
    return 0;
}

/* num%10 to remove the last number
   num/10 to get the remaining number 
   initialize at 0, increament*/
