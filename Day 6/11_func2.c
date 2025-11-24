#include<stdio.h>

int div();
int div()
{
    return 10*30;
}

int main(int argc, char const *argv[])
{
    printf("Product=%d\n",div());
    return 0;
}

/*No parameters, NO return value*/
// void add();
// void add()
// {
//     printf("Sum = %d\n",(10+20));
// }
// int main(int argc, char const *argv[])
// {
//     printf("Main fn\n");
//     add();
// }
/*takes parameters but does not return any value*/
// void mul(int a,int b);
// int main()
// {
//     mul(11,69);
//     mul(35,73);

// }
// void mul(int a,int b)
// {
//     printf("Product=%d\n",a*b);
// }