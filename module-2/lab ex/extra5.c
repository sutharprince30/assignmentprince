/*
LAB EXERCISE 1: Fibonacci Sequence
• Write a C program that generates the Fibonacci sequence up to N terms using a recursive
function.
• Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
and recursive methods. Compare their efficiency.*/

#include <stdio.h>

// Recursive function to find the Nth Fibonacci number
int fibonacci_recursive(int n) {
    if (n == 0) return 0; // Base case 1
    if (n == 1) return 1; // Base case 2
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2); // Recursive call
}

// Iterative function to find the Nth Fibonacci number
int fibonacci_iterative(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c, i;

    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Function to print Fibonacci sequence
void print_fibonacci_sequence(int n) {
    printf("Fibonacci Sequence (Recursive): ");
    int i;
    for ( i = 0; i < n; i++) 
	{
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");
}

int main() {
    int N;

    // User input
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Invalid input! N must be a non-negative integer.\n");
        return 1;
    }

    // Print Fibonacci sequence
    print_fibonacci_sequence(N);

    // Find Nth Fibonacci number using both methods
    printf("Nth Fibonacci number (Recursive): %d\n", fibonacci_recursive(N));
    printf("Nth Fibonacci number (Iterative): %d\n", fibonacci_iterative(N));

    return 0;
}


/*
LAB EXERCISE 2: Factorial Calculation:-

• Write a C program that calculates the factorial of a given number using a function.
• Challenge: Implement both an iterative and a recursive version of the factorial function and
compare their performance for large numbers.
*/

#include <stdio.h>
#include <time.h>

// Recursive function to calculate factorial
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

// Iterative function to calculate factorial
unsigned long long factorial_iterative(int n) {
    unsigned long long fact = 1;
    int i;
    for ( i = 1; i <= n; i++) 
	{
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    clock_t start, end;
    double time_taken;

    // User input
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Measure time for Recursive Factorial
    start = clock();
    printf("Factorial (Recursive): %llu\n", factorial_recursive(num));
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken (Recursive): %f seconds\n", time_taken);

    // Measure time for Iterative Factorial
    start = clock();
    printf("Factorial (Iterative): %llu\n", factorial_iterative(num));
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken (Iterative): %f seconds\n", time_taken);

    return 0;
}

/*LAB EXERCISE 3: Palindrome Check:-

• Write a C program that takes a number as input and checks whether it is a palindrome using
a function.
• Challenge: Modify the program to check if a given string is a palindrome.
*/

#include <stdio.h>
#include <string.h>

// Function to check if a number is a palindrome
int is_palindrome_number(int num) {
    int original = num, reversed = 0, digit;

    while (num > 0) {
        digit = num % 10;      // Get the last digit
        reversed = reversed * 10 + digit; // Build reversed number
        num /= 10;             // Remove last digit
    }
    
    return (original == reversed); // Compare original and reversed
}

// Function to check if a string is a palindrome
int is_palindrome_string(char str[]) {
    int left = 0, right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right])
            return 0;  // Not a palindrome
        left++;
        right--;
    }
    return 1; // It's a palindrome
}

int main() {
    int num;
    char str[100];

    // Checking a number palindrome
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_palindrome_number(num))
        printf("The number %d is a palindrome.\n", num);
    else
        printf("The number %d is not a palindrome.\n", num);

    // Checking a string palindrome
    printf("Enter a string: ");
    scanf("%s", str); // No need for & with %s
    if (is_palindrome_string(str))
        printf("The string \"%s\" is a palindrome.\n", str);
    else
        printf("The string \"%s\" is not a palindrome.\n", str);

    return 0;
}




