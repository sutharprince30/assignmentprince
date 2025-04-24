#include <iostream>
using namespace std;

int main() {
    // Arithmetic Operators
    int a = 10, b = 5;
     cout << "Arithmetic Operators:" <<  endl;
     cout << "a + b = " << (a + b) <<  endl;
     cout << "a - b = " << (a - b) <<  endl;
     cout << "a * b = " << (a * b) <<  endl;
     cout << "a / b = " << (a / b) <<  endl;
     cout << "a % b = " << (a % b) <<  endl;
     cout << "a++ = " << (a++) << " (then a becomes " << a << ")" <<  endl;
     cout << "++b = " << (++b) << " (b is now " << b << ")" <<  endl;
     cout << "a-- = " << (a--) << " (then a becomes " << a << ")" <<  endl;
     cout << "--b = " << (--b) << " (b is now " << b << ")" <<  endl;
     cout <<  endl;

    // Relational Operators
     cout << "Relational Operators:" <<  endl;
     cout << "a == b: " << (a == b) <<  endl;
     cout << "a != b: " << (a != b) <<  endl;
     cout << "a > b: " << (a > b) <<  endl;
     cout << "a < b: " << (a < b) <<  endl;
     cout << "a >= b: " << (a >= b) <<  endl;
     cout << "a <= b: " << (a <= b) <<  endl;
     cout <<  endl;

    // Logical Operators
    bool x = true, y = false;
     cout << "Logical Operators:" <<  endl;
     cout << "x && y: " << (x && y) <<  endl;
     cout << "x || y: " << (x || y) <<  endl;
     cout << "!x: " << (!x) <<  endl;
     cout <<  endl;

    // Bitwise Operators
    unsigned int c = 60, d = 13;
     cout << "Bitwise Operators:" <<  endl;
     cout << "c << 2: " << (c << 2) <<  endl;
     cout << "c >> 2: " << (c >> 2) <<  endl;
    
    return 0;
}
