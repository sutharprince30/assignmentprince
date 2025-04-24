/* Write a C++ program that demonstrates the use of variables and constants.
 * Create variables of different data types and perform operations on them. */

 #include <iostream>
 using namespace std;

 int main() {
   int age = 18;
   char ch  = 'y';
   float discount = 0.15f;
   string name = "Yash";
   double price = 45;
    
 
   const double PI = 3.14159;
 
    cout << "Name: " << name <<  endl;
    cout << "ch : " << ch << endl;
    cout << "Age: " << age <<  endl;
    cout << "Age next year: " << age + 1 <<  endl;
    cout << "Price: $" << price <<  endl;
    cout << "Discount: " << discount * 100 << "%" <<  endl;
    cout << "Discounted price: $" << price * (1 - discount) <<  endl;
    cout << "PI: " << PI <<  endl;
 
   return 0;
 }