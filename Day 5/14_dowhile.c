#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1, n;
    printf("Enter n\n");
    scanf("%d", &n);
    do
    {
        printf("%d\n",i);
        i++;
    } while (i <= n);

    return 0;
}
