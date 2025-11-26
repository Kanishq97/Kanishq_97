#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 20;
    int *ptr = &a;
    int *p=&*ptr;
    int *q=&*p;
    printf("Value of a:%d\n", *q);
    return 0;
}
