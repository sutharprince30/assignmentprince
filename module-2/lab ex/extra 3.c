/*LAB EXERCISE 1: Prime Number Check:-

• Write a C program that checks whether a given number is a prime number or not using a for
loop.
• Challenge: Modify the program to print all prime numbers between 1 and a given number.*/

#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is prime
    if (n < 2) {
        printf("%d is not a prime number.\n", n);
    } else {
        isPrime = 1;
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }

    // Print all prime numbers up to n
    printf("Prime numbers between 1 and %d are: ", n);
    for (i = 1; i <= n; i++) {
        if (i < 2) continue;
        isPrime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}



/*
LAB EXERCISE 2: Multiplication Table:-

• Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.
• Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).
*/
#include <stdio.h>
int main() 
{
    int num, range,i;
    
    
    printf("Enter the number=: ");
    scanf("%d", &num);
    
    printf("Enter the range = ");
    scanf("%d", &range);
    
    printf("Multiplication Table of %d up to %d:\n", num, range);
    for ( i = 1; i <= range; i++) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}




/*
LAB EXERCISE 3: Sum of Digits:-

• Write a C program that takes an integer from the user and calculates the sum of its digits
using a while loop.
• Challenge: Extend the program to reverse the digits of the number.\
*/

#include <stdio.h>

int main() 
{
    int num, sum = 0, reverse = 0, digit;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    
    
    while (num != 0) {
        digit = num % 10;  
        sum = sum + digit;      
        reverse = (reverse * 10 )+ digit; 
        num  = num / 10;         
    }
    
    
    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", reverse);
    
    return 0;
}

*/
//patterns 

/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
	int row,i,j;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}
	
/*
A
BC
DEF
GHIJ
KLMNO
*/

	
	char ch='A';
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}

/*
1
2 3
4 5 6
7 8 9 10
*/

	int k=1;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%3d ",k);
			k++;
		}
		printf("\n");
	}


/*
A
AB
ABC
ABCD
ABCDE
*/
	
	char o;
	
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    
    for (i = 1; i <= row; i++) 
	{
        for ( o = 'A'; o < 'A' + i; o++) 
		{
            printf("%c", o);
        }
        printf("\n");
    }
    
   


/*
    *
   * *
  * * *
 * * * *
* * * * *
*/

	printf("\nEnter the row number = ");
	scanf("%d",&row);//5
	int spc = row-1,p;
	for(i=1;i<=row;i++)
	{
		for(p=1;p<=spc;p++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		spc--;
	}
	
	
/*
*
**
***
****
*****
******
*****
****
***
**
*
*/

printf("\nEnter the row count = ");
	scanf("%d",&row);//3
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
		for(i=row-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}


	return 0;
}


//• Write a program to find out the max from given number (E.g., No: -1562 Max number is 6).


#include <stdio.h>

int main() 
{
    int num, maxdigit = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) 
	{
        digit = num % 10; 
        if (digit > maxdigit) 
		{
            maxdigit = digit;
        }
        num /= 10;
    }

    printf("Maximum digit is: %d\n", maxdigit);

    return 0;
}


