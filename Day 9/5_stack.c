// INFIX TO POSTFIX

#include <stdio.h>
#define N 100;

int stack[100];
int top = -1;

void push();
void push()
{
    if (top >= 100)
    {
        printf("Stack is full\n");
    }
    else
    {
        int n;
        printf("Enter a number: \n");
        scanf("%d", &n);
        top++;
        stack[top] = n;
        printf("%d element is pushed\n", n);
    }
}

void pop();
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty \n");
    }
    else
    {
        printf("Element popped is %d\n", stack[top]);
        top--;
    }
}

void display();
void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int choice;
    while (1)
    {
        printf("Enter your choice: \n1. Push\n2. Pop\n3. Display\n4. exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            return 0;
            break;

        default:
            printf("Invalid Input!!\n");
            break;
        }
    }

    return 0;
}
