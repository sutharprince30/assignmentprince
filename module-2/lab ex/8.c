/* Write a C program that calculates the factorial of a number using a function
Include function declaration, definition, and call.*/

#include <stdio.h>

 long long factorial(int n);

int main() {
    int num;
    
    printf("Enter a number= ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        printf("Factorial of %d is %ld\n", num, factorial(num));
    }
    
    return 0;
}


long long factorial(int n)
 {
    if (n == 0 || n == 1)
	 {
        return 1; 
    }
    return n * factorial(n - 1);
}



//WAP to find factorial using recursion								

#include <stdio.h>
long long factorial(int n) {
    if (n == 0 || n == 1)
        
		return 1; 
        
    return n * factorial(n - 1); 
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
	  printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
		printf("Factorial of %d is %lld\n", num, factorial(num));
	}	
    return 0;
}


//WAP to reverse a string and check that the string is palindrome or no

#include <stdio.h>
#include <string.h>

void reverseString(char str[], char rev[]) {
    int len = strlen(str);
    int i;
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0'; 
}


int isPalindrome(char str[], char rev[]) {
    return strcmp(str, rev) == 0;
}

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    scanf("%s", str);

    
    reverseString(str, rev);

    
    printf("Reversed string: %s\n", rev);

    
    if (isPalindrome(str, rev)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


