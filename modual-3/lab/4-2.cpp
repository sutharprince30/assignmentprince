/* Write a C++ program that calculates the factorial of a number using
 * recursion. */

 #include <iostream>
 using namespace std;

 unsigned long long factorial(int n) {
   if (n == 0) {
     return 1;
   } else if (n > 0) {
     return n * factorial(n - 1);
   } else {
      cout << "error: factorial is not defined for negative numbers."
               <<  endl;
     return 0;
   }
 }
 
 int main() {
   int num;
 
    cout << "enter a non-negative integer: ";
    cin >> num;
 
   unsigned long long result = factorial(num);
 
   if (result == 0) {
     return 1;
   } else {
      cout << "Factorial of " << num << " = " << result <<  endl;
   }
 
   return 0;
 }