/* Write a C++ program that takes a student’s marks as input and calculates the
 * grade based on if-else conditions. */

 #include <iostream>
 using namespace std;

 int main() {
   int marks;
 
    cout << "enter the student's marks: ";
    cin >> marks;
 
   if (marks < 0 || marks > 100) {
      cout << "marks should be between 0 and 100."
               <<  endl;
     return 1;
   }
 
   char grade;
   if (marks >= 90) {
     grade = 'A';
   } else if (marks >= 80) {
     grade = 'B';
   } else if (marks >= 70) {
     grade = 'C';
   } else if (marks >= 60) {
     grade = 'D';
   } else {
     grade = 'F';
   }
 
    cout << "the student's grade : " << grade <<  endl;
 
   return 0;
 }