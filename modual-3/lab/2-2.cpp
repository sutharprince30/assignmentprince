
/* Write a C++ program that performs both implicit and explicit type conversions 
 * and prints the results. */

 #include <iostream>
 using namespace std;

int main() {
    int a = 10;           // Implicit conversion: int to double
    double b = a;
     cout << "Implicit conversion (int to double): " << b <<  endl;

    double x = 3.14;      // Explicit conversion: double to int
    int y = (int)x;
     cout << "Explicit conversion (double to int): " << y <<  endl;

    return 0;
}
