#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int a=6;
    int *b=&a;
    int *ptr=&*b;
    printf("%p\n",&a);
    printf("%p\n%p\n%p\n",b,&b,&ptr);
    return 0;
}
