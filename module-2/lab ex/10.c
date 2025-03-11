/*Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.*/


#include <stdio.h>
int main()
 {
    int num = 10;    
    int *ptr = &num; 

    printf("Original value of num: %d\n", num);

    *ptr = 20; 

    printf("Modified value of num: %d\n", num);

    return 0;
}

