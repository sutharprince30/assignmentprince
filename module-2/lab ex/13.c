/* Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.
*/


#include <stdio.h>

int main() {
    FILE *file;
    char str[100];

    // Open a file for writing
    file = fopen("example.txt", "w"); 
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1; // Exit if file opening fails
    }

    // Write a string to the file
    printf("Enter a string to write to the file: ");
    fgets(str, sizeof(str), stdin); // Read string from user input
    fputs(str, file); // Write string to file

    // Close the file
    fclose(file);
    printf("Data successfully written to file.\n");

    // Open the file again for reading
    file = fopen("example.txt", "r"); // "r" mode opens an existing file for reading
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Read and display the file content
    printf("\nReading from file:\n");
    while (fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }

    // Close the file
    fclose(file);

    return 0;
}

