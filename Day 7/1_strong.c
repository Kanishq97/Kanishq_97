#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, temp, digit, fact, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;
        fact = 1;

        for (int i = 1; i <= digit; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == num)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not a strong number\n");
    }

    return 0;
}
