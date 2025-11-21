#include<stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    int ascii;
    printf("Enter a character\n");
    scanf("%c",&ch);
    printf("Ascii value = %d\n", ch);
    ascii=ch;
    if (ascii>=65 && ascii<=90)
    {
        printf("Uppercase\n");
    }
    else
    {
        printf("Lowercase\n");
    }
    
    
    return 0;
}

// store ascii in ch
// use && operator