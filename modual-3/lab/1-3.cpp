/* Write two small programs: one using Procedural Programming (POP) to calculate
 * the area of a rectangle, and another using Object-Oriented Programming (OOP)
 * with a class and object for the same task. */

 #include <iostream>
 using namespace std;

 class rct{
 private:
   int length;
   int width;
 
 public:
 rct (int len, int wid) {
     length = len;
     width = wid;
   }
 
   int area() { return length * width; }
 };
 
 double CalculateRectangleArea(int length, int width) { return length * width; }
 
 int main() {
   int length, width;
 
     cout << "length: ";
     cin >> length;
 
     cout << "width: ";
     cin >> width;
 
   rct rect (length,width);
 
     cout << "area (using a function; procedural programming (POP)): "
             << CalculateRectangleArea(length, width) <<   endl;
 
     cout << "area (using a method; Object-Oriented Programming (OOP)): "
             << rect.area() <<endl;
 
   return 0;
 }