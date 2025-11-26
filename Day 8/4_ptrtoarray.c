#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = &(arr[0]);
    printf("%d\n", arr[0]);
    printf("%d\n", *ptr);
    printf("%p\n", &arr[0]);
    printf("%p\n", ptr);
    printf("%d\n", *(arr + 1));
    ptr=ptr+3;
    printf("%d\n", *ptr);

    return 0;
}

// int main(int argc, char const *argv[])
// {
//     int arr[4];
//     arr[0]=100;
//     arr[1]=200;
//     arr[2]=300;
//     int *ptr= &arr[0];

//     printf("%d\n",arr[0]);
//     printf("%d\n",*ptr);

//     return 0;
// }
