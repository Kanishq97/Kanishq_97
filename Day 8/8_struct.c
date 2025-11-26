#include <stdio.h>
#include <string.h>

struct student
{
    char name[30];
    char username[30];
    int UID;
    float KD;
} p1, p2, p3;

int main(int argc, char const *argv[])
{
    printf("Enter Player1 Details:\n");
    printf("Enter Player2 Details:\n");
    printf("Enter Player3 Details:\n");
    scanf("%s%s%d%f", &p1.name, &p1.username, &p1.UID, &p1.KD);
    scanf("%s%s%d%f", &p2.name, &p2.username, &p2.UID, &p2.KD);
    scanf("%s%s%d%f", &p3.name, &p3.username, &p3.UID, &p3.KD);

    printf("Player 1\n");
    printf("Player name:%s\n", p1.name);
    printf("Player username:%s\n", p1.username);
    printf("Player UID:%d\n", p1.UID);
    printf("Player KD:%.2f\n", p1.KD);
    printf("\n");

    printf("Player 2\n");
    printf("Player name:%s\n", p2.name);
    printf("Player username:%s\n", p2.username);
    printf("Player UID:%d\n", p2.UID);
    printf("Player KD:%.2f\n", p2.KD);
    printf("\n");

    printf("Player 3\n");
    printf("Player name:%s\n", p3.name);
    printf("Player username:%s\n", p3.username);
    printf("Player UID:%d\n", p3.UID);
    printf("Player KD:%.2f\n", p3.KD);
    printf("\n");

    return 0;
}

// int main(int argc, char const *argv[])
// {
//     strcpy(st1.name, "Steve");
//     st1.roll_no = 7;
//     st1.marks = 25;
//     printf("Student name:%s\n", st1.name);
//     printf("Student roll number:%d\n", st1.roll_no);
//     printf("Student Marks:%.2f\n", st1.marks);

//     strcpy(st2.name, "Sam");
//     st2.roll_no = 9;
//     st2.marks = 20;
//     printf("Student name:%s\n", st2.name);
//     printf("Student roll number:%d\n", st2.roll_no);
//     printf("Student Marks:%.2f\n", st2.marks);

//     strcpy(st3.name, "Kevin");
//     st3.roll_no = 10;
//     st3.marks = 22.5;
//     printf("Student name:%s\n", st3.name);
//     printf("Student roll number:%d\n", st3.roll_no);
//     printf("Student Marks:%.2f\n", st3.marks);

//     return 0;
// }
