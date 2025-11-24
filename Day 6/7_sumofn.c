#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, sum=0;
    printf("Enter n natural numbers\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("Sum = %d\n", sum);

    return 0;
}