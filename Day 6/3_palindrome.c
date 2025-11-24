#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n, sum = 0, rev = 0, x, d;
    printf("Enter a number\n");
    scanf("%d", &n);
    x = n;
    while (n)
    {
        d = n % 10;
        n = n / 10;
        rev = rev * 10 + d;
    }
    printf("The reverse of the number is %d\n", rev);

    if (rev == x)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
