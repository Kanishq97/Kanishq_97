#include <stdio.h>

int main()
{
    int marks[2][2], i, j;

    printf("Enter the elements:");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }

    printf("Array elements: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (marks[i][j] % 2 == 0)
            {
                printf("%d ", marks[i][j]);
            }
        }

        printf("\n");
    }

    return 0;
}

/* int main(int argc, char const *argv[])
// {
//     int marks[2][2];

//     marks[0][0]=60;
//     marks[0][1]=50;
//     marks[1][0]=45;
//     marks[1][1]=90;
//     printf("%d %d\n" , marks[0][0],marks[0][1]);
//     printf("%d %d\n",marks[1][0],marks[1][1]);

//     printf("Size of array:%d\n",sizeof(marks));
//     printf("Length of array:%d\n",(sizeof(marks)/sizeof(marks[0][0])));

//     return 0;
 }*/