#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter two numbers a and b\n");
    scanf("%d%d", &a, &b);
    printf("a&&b is = %d\n", a && b);
    printf("a||b is = %d\n", a || b);
    printf("!a is = %d\n", !a);

    return 0;
}
