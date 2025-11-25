#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5], max = 0, smax=0, i;
    printf("Enter a number:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Maximum value=%d\n", max);
    return 0;
}

/* int main(int argc, char const *argv[])
// {
//     int arr[5], min = 0, i;
//     printf("Enter a number:");
//     for (int i = 0; i < 5 - 1; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     min = arr[0];
//     for (int i = 0; i < 5 - 1; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     printf("Minimum value=%d\n", min);
//     return 0;
 } */
