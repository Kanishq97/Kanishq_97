#include<stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 10; i++)
    {
        if (i==8)
        {
            break;
        }
        if (i==5)
        {
            continue;
        }
        printf("%d\n", i);
    }
    
}
