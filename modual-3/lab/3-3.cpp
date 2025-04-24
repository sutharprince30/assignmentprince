/* Write a C++ program to display the multiplication table of a given number
 * using a for loop. */

 #include <iostream>
 using namespace std;

 int main() {
   unsigned int num;
 
    cout << "enter a number: ";
    cin >> num;
 
    cout << "multiplication table for " << num << ":" <<  endl;
   for (unsigned int i = 1; i <= 10; i++) {
      cout << num << " * " << i << " = " << num * i <<  endl;
   }
 
   return 0;
 }