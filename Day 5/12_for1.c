#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for (i = 2; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

// use +=2 or the even number condition