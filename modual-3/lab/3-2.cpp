/* Write a C++ program that asks the user to guess a number between 1 and 100.
 * The program should provide hints if the guess is too high or too low. Use
 * loops to allow the user multiple attempts. */

 #include <iostream>
 using namespace std;

 int main() {
   unsigned int num = 19;
 
    cout << "i have chosen a number between 1 and 100.\n";
 
   unsigned int guess, attempts = 0;
   bool guessed = false;
 
   while (!guessed) {
      cout << "enter your guess: ";
      cin >> guess;
     attempts++;
 
     if (guess < 1 || guess > 100) {
        cout << "please enter a number between 1 and 100.\n";
       continue;
     }
 
     if (guess < num) {
        cout << "Too low! Try again." <<  endl;
     } else if (guess > num) {
        cout << "Too high! Try again." <<  endl;
     } else {
        cout << "congratulations! you guessed the number " << num << " in "
                 << attempts << " attempts.\n";
       guessed = true;
     }
   }
 
   return 0;
 }