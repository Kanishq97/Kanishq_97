#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a\n");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("The number is positive\n");
    }

    else if (a < 0)
    {
        printf("The number is negative\n");
    }

    else
    {
        printf("The number is neither +ve nor -ve\n");
    }

    return 0;
}
