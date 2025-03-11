/*
LAB EXERCISE 1: String Reversal:-

• Write a C program that takes a string as input and reverses it using a function.
• Challenge: Write the program without using built-in string handling functions.
*/

#include <stdio.h>

void reverseString(char str[]) {
    int length = 0, i;
    
    // Find the length of the string manually
    while (str[length] != '\0') 
	{
        length++;
    }

    // Reverse the string in place
    for (i = 0; i < length / 2; i++) 
	{
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);  

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}



/*
LAB EXERCISE 2: Count Vowels and Consonants:-

• Write a C program that takes a string from the user and counts the number of vowels and
consonants in the string.
• Challenge: Extend the program to also count digits and special characters.
*/

#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, specialChars = 0;

    // Taking input from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Reads the whole line including spaces
	int i;
    // Loop through each character in the string
    for ( i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            consonants++;
        }
        // check for count digit
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        // Anything else is a special character
        else {
            specialChars++;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial Characters: %d\n", specialChars);

    return 0;
}


/*
LAB EXERCISE 3: Word Count:-

• Write a C program that counts the number of words in a sentence entered by the user.
• Challenge: Modify the program to find the longest word in the sentence.
*/

#include <stdio.h>

int main() {
    char str[200], longestWord[200];
    int wordCount = 1, maxLen = 0, currentLen = 0, i, start = 0, longestStart = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);  

    // Loop through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check for spaces to count words
        if (str[i] == ' ') {
            wordCount++;

            // Check if the current word is the longest
            if (currentLen > maxLen) {
                maxLen = currentLen;
                longestStart = start;
            }
            // Reset word length and update start position
            currentLen = 0;
            start = i + 1;
        } else {
            currentLen++;
        }
    }

    // Check the last word
    if (currentLen > maxLen) {
        maxLen = currentLen;
        longestStart = start;
    }

    // Extract the longest word
    for (i = 0; i < maxLen; i++) {
        longestWord[i] = str[longestStart + i];
    }
    longestWord[maxLen] = '\0';  // Null-terminate the longest word

    printf("\nNumber of words: %d", wordCount);
    printf("\nLongest word: %s\n", longestWord);

    return 0;
}
	
