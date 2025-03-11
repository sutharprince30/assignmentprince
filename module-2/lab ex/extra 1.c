/*• Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.
• Challenge: Extend the program to handle invalid operator inputs.*/

#include <stdio.h>
int main() 
{
    double num1, num2, result;
    char ch='%', choice;

    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
     printf("Enter an operator (+, -, *, /, %c): ",ch);
    scanf(" %c", &choice);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);
    

    switch(choice) 
	{
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if ((int)num1 == num1 && (int)num2 == num2) 
			{
                if ((int)num2 != 0)
                    printf("Result: %d\n", (int)num1 % (int)num2);
                else
                    printf("Error: Modulus by zero is not allowed.\n");
            } 
			else 
			{
                printf("Error: Modulus operator requires integer operands.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please use +, -, *, /, or %.\n");
    }
    
    return 0;
}


/*• Write a C program that takes an integer from the user and checks the following using
different operators:
o Whether the number is even or odd.
o Whether the number is positive, negative, or zero.
o Whether the number is a multiple of both 3 and 5.*/

#include <stdio.h>

int main() 
{
    int num;

    printf("Enter the number = ");
    scanf("%d", &num);

    // even or odd
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    //  positive, negative, or zero
    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("%d is zero.\n", num);
    }

    //  if the number is a multiple of both 3 and 5
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is a multiple of both 3 and 5.\n", num);
    } else {
        printf("%d is not a multiple of both 3 and 5.\n", num);
    }

    return 0;
}


