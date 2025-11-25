#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5], i;
    printf("Enter a number:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array elememts:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d value is : %d\n", i + 1, arr[i]);
        if (arr[i] % 2 == 0)
        {
            printf("Even\n");
        }

    }
    printf("Size of array:%d\n",sizeof(arr));
    printf("Length of array:%d\n",(sizeof(arr)/sizeof(arr[0])));
    

    return 0;
}
