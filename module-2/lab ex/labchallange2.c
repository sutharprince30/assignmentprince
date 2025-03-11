/*
Lab Challenge 2: Pascal’s Triangle:-

• Write a C program that generates Pascal’s Triangle up to N rows using loops.*/

#include <stdio.h>

int main() {
    int rows, i, j, k, num;

    printf("Enter number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) 
	{
        num = 1;  

        for (k = 0; k < rows - i - 1; k++) 
		{
            printf(" ");
        }

        for (j = 0; j <= i; j++) 
		{
            printf("%d ", num);
            num = num * (i - j) / (j + 1);  
        }
        printf("\n");
    }

    return 0;
}





//• Challenge: Implement the same program using a recursive function.


#include <stdio.h>

// Recursive function to calculate binomial coefficient (nCr)
int binomialCoeff(int n, int r) {
    if (r == 0 || r == n)
        return 1;  // Base case: nC0 = nCn = 1
    return binomialCoeff(n - 1, r - 1) + binomialCoeff(n - 1, r);
}

int main() {
    int rows;

    printf("Enter number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
	int i,j;
    // Generate Pascal's Triangle
    for (i = 0; i < rows; i++) {
        // Print spaces for formatting
        for ( j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print numbers using recursive binomial coefficient function
        for ( j = 0; j <= i; j++) {
            printf("%d ", binomialCoeff(i, j));
        }
        printf("\n");
    }

    return 0;
}

