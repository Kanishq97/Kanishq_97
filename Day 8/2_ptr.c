#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 20;
    int *ptr = &a;
    *ptr = 50;
    printf("Value of a:%d\n", *ptr);
    (*ptr)++;
    printf("%d\n", *ptr);
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     int n=100;
//     int *p=&n;
//     printf("Value of num:\n%d\n%d\n%d\n%d\n%d\n",n,*p,*(&n),*(*(&p)),*((&*(&n))));
//     printf("Value of ptr:\n%p\n%p\n%p\n%p\n",p,&n,*(&p),*((&*(&p))));
//     return 0;
// }

// Pointer to variable
