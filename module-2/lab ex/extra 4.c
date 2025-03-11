/*
LAB EXERCISE 1: Maximum and Minimum in Array:-

• Write a C program that accepts 10 integers from the user and stores them in an array. The
program should then find and print the maximum and minimum values in the array.
• Challenge: Extend the program to sort the array in ascending order.*/


#include <stdio.h>

int main() {
    int arr[100], i, j, temp;
    int max, min;

    printf("Enter 10 number :\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    //  max and min with the first element
    max = min = arr[0];

    // Finding the maximum and minimum values
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    // Sorting the array in (Ascending Order)
    for (i = 0; i < 10 - 1; i++) 
	{
        for (j = 0; j < 10 - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}



/*
LAB EXERCISE 2: Matrix Addition:-

• Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.
• Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.
*/


#include <stdio.h>

int main() 
{
    int size, i, j, k;
    int A[3][3], B[3][3], sum[3][3], product[3][3];

    // Choosing matrix size
    printf("Enter matrix size (2 for 2x2, 3 for 3x3): ");
    scanf("%d", &size);

    if (size != 2 && size != 3) 
	{
        printf("Invalid size! Only 2x2 and 3x3 matrices are supported.\n");
        return 1;
    }

    // Input matrices
    printf("Enter elements of Matrix A (%dx%d):\n", size, size);
    for (i = 0; i < size; i++) 
	{
        for (j = 0; j < size; j++)
		 {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (%dx%d):\n", size, size);
    for (i = 0; i < size; i++) 
	{
        for (j = 0; j < size; j++) 
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix Addition
    for (i = 0; i < size; i++) 
	{
        for (j = 0; j < size; j++) 
		{
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Matrix Multiplication
    for (i = 0; i < size; i++) 
	{
        for (j = 0; j < size; j++) 
		{
            product[i][j] = 0;
            for (k = 0; k < size; k++) 
			{
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display Sum Matrix
    printf("\nSum Matrix:\n");
    for (i = 0; i < size; i++) 
	{
        for (j = 0; j < size; j++) 
		{
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    // Display Product Matrix
    printf("\nProduct Matrix:\n");
    for (i = 0; i < size; i++) 
	{
        for (j = 0; j < size; j++) 
		{
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}




/*LAB EXERCISE 3: Sum of Array Elements:-

• Write a C program that takes N numbers from the user and stores them in an array. The
program should then calculate and display the sum of all array elements.
• Challenge: Modify the program to also find the average of the numbers.
*/


#include <stdio.h>

int main() {
    int num, i;
    float sum = 0, average;

    // Taking input for N (number of elements)
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input! Number of elements must be greater than 0.\n");
        return 1;
    }

    int numbers[num]; 

    printf("Enter %d numbers:\n", num);
    for (i = 0; i < num; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i]; 
    }

    average = sum / num;

    // Displaying results
    printf("\nSum of all elements: %.2f\n", sum);
    printf("Average of all elements: %.2f\n", average);

    return 0;
}




