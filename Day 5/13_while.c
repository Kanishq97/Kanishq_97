#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=1,n;
    printf("Enter n\n");
    scanf("%d", &n);
    while (i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    
    return 0;
}
