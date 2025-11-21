#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("Grade A\n");
    }
    else if (marks >= 80)
    {
        printf("Grade B\n");
    }
    else if (marks >= 70)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Grade F\n");
    }

    return 0;
}
