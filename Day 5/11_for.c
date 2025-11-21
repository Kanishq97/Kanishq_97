#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,sum;
    printf("Enter n natural numbers\n");
    scanf("%d",&n);

    for ( i = n; i <= n; i++)
    {
        sum=(i*(i-1))/2;
        printf("Sum = %d\n", sum);
    }
    
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     int n, i;
//     printf("Enter number you want a multiplication table of\n");
//     scanf("%d", &n);
//     for (i = 1; i <= 10; i++)
//     {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }

//     return 0;
// }
