/*
Lab Challenge 4: Sum of Prime Numbers
• Description: Write a C program that calculates the sum of all prime numbers up to a given
number N.
• Challenge: Extend the program to find and print all the prime numbers found.*/

#include <stdio.h>

int main() {
    int num, i, j, isPrime, sum = 0;

    printf("Enter the value of num = ");
    scanf("%d", &num);

    printf("Prime numbers up to %d are: ", num);

    // Loop through all numbers from 2 to Num
    for (i = 2; i <= num; i++) {
        isPrime = 1;  // Assume i is prime

        // Check if i is prime
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // Not a prime
                break;
            }
        }

        // If prime, add to sum and print
        if (isPrime) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum of prime numbers up to %d = %d\n", num, sum);
    
    return 0;
}

