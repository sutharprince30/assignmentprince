/* Write a C++ program to check if a given string is a palindrome. */

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string input, reversed;

    // Get input from the user
    cout << "Enter a string: ";
    getline(cin, input);

   
    reversed = input;
    reverse(reversed.begin(), reversed.end());

   
    if (input == reversed) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}
