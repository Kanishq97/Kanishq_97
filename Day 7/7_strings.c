#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char input[100];
    printf("Enter a string:");
    fgets(input, sizeof(input), stdin);
    printf("%s", input);
    return 0;
}

/*int main(int argc, char const *argv[])
{
    char input[300];
    printf("Enter a string: ");
    scanf("%s",input);
    printf("%s",input);
    return 0;
}


/*int main(int argc, char const *argv[])
{
    char name[] = "Kanishq";

    printf("%s", name);
    return 0;
}*/