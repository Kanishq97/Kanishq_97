#include <stdio.h>
#include<stdbool.h>
int main(int argc, char const *argv[])
{
    int age = 30;
    float pi = 3.14;
    char name = 'K';
    double marks = 500.55;
    char n[34] = "Kanishq";
    bool iswalking = true;
    printf(" Age=%d\n pi=%f\n name=%c\n marks=%lf\n name=%s\n ", age, pi, name, marks, n);
    printf("Address=%p\n is walk\ting=%d\n",age,iswalking);
    return 0;
}
