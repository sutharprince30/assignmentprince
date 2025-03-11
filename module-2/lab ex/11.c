/*Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().*/


#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100], str2[100]; 

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);

    printf("Concatenated String: %s\n", str1);
    printf("Length of Concatenated String: %lu\n", strlen(str1));

    return 0;
}


//Find length of string which is entered by user without using inbuilt function.

#include <stdio.h>
int main() 
{
    char str[100];  
    int length = 0; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Length of the entered string: %d\n", length);

    return 0;
}

//Join 2 strings using of user defined function without using inbuilt function.


#include <stdio.h>

void concatenateStrings(char str1[], char str2[]) 
{
    int i = 0, j = 0;


    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; 
}

int main() 
{
    char str1[200], str2[100]; 

    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    
    concatenateStrings(str1, str2);

    
    printf("Concatenated String: %s\n", str1);

    return 0;
}





//Accept string from user and check it is palindrome or not


#include <stdio.h>

int isPalindrome(char str[]) 
{
    int left = 0, right = 0;

    
    while (str[right] != '\0') {
        right++;
    }
    right--; 

    
    while (left < right) {
        if (str[left] != str[right]) {
            return 0; 
        }
        left++;
        right--;
    }
    return 1; 
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

