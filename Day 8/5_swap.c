#include <stdio.h>
// Pointers method
int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    printf("Before swapping:\na=%d\nb=%d\n", a, b);
    int *p = &a;
    int *q=&b;
    int temp=*p;
    *p=*q;
    *q=temp;
    printf("After swapping:\na=%d\nb=%d\n", a, b);

    return 0;
}

// Normal Method//
/* int main(int argc, char const *argv[])
   {
     int a = 10;
     int b = 20;
     int t=a;
     a=b;
     b=t;

     printf("%d\n",a);
     printf("%d\n",b);

     return 0;
   }
*/
