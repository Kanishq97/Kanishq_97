#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char first_name[]="Pav";
    char last_name[]="Bhaji";
    char another_name[]="Pav";

    printf("Length of the first name: %d \n",strlen(first_name));
    printf("Full name: %s\n",strcat(first_name,last_name));
    printf("%d\n",strcmp(first_name,another_name));

    if (strcmp(first_name,another_name)==0)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }
    printf("%s\n%s\n%s\n",first_name,last_name,another_name);
    

    return 0;
}
