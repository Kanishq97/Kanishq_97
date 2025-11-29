#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int rollno;
    int age;
    float marks;
    struct Student* next;
};

struct Student* top = NULL;

void push() {
    struct Student* newNode = (struct Student*)malloc(sizeof(struct Student));
    if (!newNode) {
        printf("Stack Overflow (Memory allocation failed)\n");
        return;
    }

    printf("\nEnter student details:\n");
    printf("Name: ");
    scanf("%s", newNode->name); 
    printf("Roll No: ");
    scanf("%d", &newNode->rollno);
    printf("Age: ");
    scanf("%d", &newNode->age);
    printf("Marks: ");
    scanf("%f", &newNode->marks);

    newNode->next = top; 
    top = newNode; 
    printf("\nStudent record added to the system.\n");
}


void pop() {
    if (top == NULL) {
        printf("\nStack Underflow (No students registered yet)\n");
        return;
    }

    struct Student* temp = top;
    printf("\nPopping student record from the top of the stack:\n");
    printf("Name: %s, Roll No: %d\n", temp->name, temp->rollno);

    top = top->next; 
    free(temp); 
}


void peek() {
    if (top == NULL) {
        printf("\nStack is empty, no records to display.\n");
        return;
    }

    printf("\nTop student record (Last registered):\n");
    printf("Name: %s\n", top->name);
    printf("Roll No: %d\n", top->rollno);
    printf("Age: %d\n", top->age);
    printf("Marks: %.2f\n", top->marks);
}


void display() {
    if (top == NULL) {
        printf("\nStack is empty, no records to display.\n");
        return;
    }

    struct Student* temp = top;
    printf("\n--- Student Records (Last Registered to First Registered) ---\n");
    while (temp != NULL) {
        printf("Name: %s, Roll No: %d, Age: %d, Marks: %.2f\n", temp->name, temp->rollno, temp->age, temp->marks);
        temp = temp->next;
    }
    printf("----------------------------------------------------------\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n***** Student Registration System Menu *****\n");
        printf("1. Register a new student (Push)\n");
        printf("2. Remove last registered student (Pop)\n");
        printf("3. View top student record (Peek)\n");
        printf("4. Display all student records\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
