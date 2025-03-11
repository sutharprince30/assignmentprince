/*Write a C program that stores 5 integers in a one-dimensional array and prints 
them. Extend this to handle a two-dimensional array (3x3 matrix) and 
calculate the sum of all elements.*/

#include <stdio.h>
int main() 
{
    
    int arr1D[5];
    int i, j, sum = 0;

    
    printf("Enter 5 integers for 1D array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr1D[i]);
    }


    printf("1D Array elements: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr1D[i]);
    }
    printf("\n\n");

    int arr2D[3][3];

    
    printf("Enter 9 integers for 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr2D[i][j]);
            sum += arr2D[i][j]; 
        }
    }

    
    printf("3x3 Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr2D[i][j]);
        }
        printf("\n");
    }

    
    printf("\nSum of all elements in the 3x3 matrix: %d\n", sum);

    return 0;
}

//Accept number from user store in array  

#include <stdio.h>
int main() 
{
    int n, i;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Stored numbers in the array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


//Convert array into asce and dec order

#include <stdio.h>

int main() {
    int n, i, j, temp;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting in Ascending Order
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {  // Swap if current element is greater
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    printf("Ascending Order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sorting in Descending Order
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {  // Swap if current element is smaller
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    printf("Descending Order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


//Find max element from the array

#include <stdio.h>

int main() {
    int n, i, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; 

    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding maximum element
    max = arr[0]; 
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

    
    printf("Maximum element in the array is: %d\n", max);

    return 0;
}






