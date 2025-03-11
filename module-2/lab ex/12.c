/*Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them.*/

#include <stdio.h>
#include <string.h> 

struct Student 
{
    char name[50];
    int rollNumber;
    float marks;
};

int main() 
{
    struct Student students[3]; 
    int i;  

    for (i = 0; i < 3; i++) 
	{
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter Name: ");
        fflush(stdin); 
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

        printf("Enter Roll Number: ");
        while (scanf("%d", &students[i].rollNumber) != 1) { 
            printf("Invalid input! Enter a valid roll number: ");
            fflush(stdin); 
        }

        printf("Enter Marks: ");
        while (scanf("%f", &students[i].marks) != 1) 
		{ 
            printf("Invalid input! Enter valid marks: ");
            fflush(stdin); 
        }
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < 3; i++) 
	{ 
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
        printf("-----------------\n");
    }

    return 0;
}

