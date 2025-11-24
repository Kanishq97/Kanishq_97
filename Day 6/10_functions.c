#include <stdio.h>
/*User defined function*/
int add(int a,int b);
int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b);
int sub(int a, int b)
{
    return a-b;
}

int main(int argc, char const *argv[])
{
    printf("The sum is\n%d\n%d\n%d\n",add(4,5),add(10,9),add(55,45));
    printf("The difference is\n%d\n%d\n%d\n",sub(46,34),sub(10,9),sub(55,45));
    return 0;
}
/*pf,sf ---> In-built functions*/