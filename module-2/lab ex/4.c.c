/*Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results.*/
#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter num1 value : ");
    scanf("%d",&num1);
    printf("Enter num2 value: ");
    scanf("%d",&num2);
    
    printf("Arithmetic operations:\n");
    
    printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2);
    printf("\nThe subtraction of %d and %d is %d",num1,num2,num1 - num2);
    printf("\nThe multiplication of %d and %d is %d",num1,num2,num1 * num2);
    printf("\nThe division of %d and %d is %.2f",num1,num2,(float)num1/(float)num2);
    printf("\nThe remainder of %d and %d is %d\n",num1,num2,num1%num2);
    
    printf("Relational operations:\n");
    
    printf("%d == %d so it is : %s\n", num1, num2, (num1 == num2) ? "true" : "false");
    printf("%d != %d so it is: %s\n", num1, num2, (num1 != num2) ? "true" : "false");
    printf("%d > %d so it is: %s\n", num1, num2, (num1 > num2) ? "true" : "false");
    printf("%d < %d so it is: %s\n", num1, num2, (num1 < num2) ? "true" : "false");
    printf("%d >= %d so it is: %s\n", num1, num2, (num1 >= num2) ? "true" : "false");
    printf("%d <= %d so it is: %s\n", num1, num2, (num1 <= num2) ? "true" : "false");

    printf("Logical operations using ternary operator:\n");
    
    printf("(%d > 0) && (%d > 0): %s\n", num1, num2, (num1 > 0 && num2 > 0) ? "it is true" : "it is not true");
    printf("(%d > 0) || (%d > 0): %s\n", num1, num2, (num1 > 0 || num2 > 0) ? "it is true" : "it is not true");
    printf("!(%d > %d): %s\n", num1, num2, (!(num1 > num2)) ? "it is true" : "it is not true");
    
    return 0;
}

