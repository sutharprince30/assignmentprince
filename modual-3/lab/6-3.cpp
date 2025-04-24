/* Write a program that implements inheritance using a base class Person and
 * derived classes Student and Teacher. Demonstrate reusability through
 * inheritance. */

 #include <iostream>
 #include <string>
 using namespace std;
 
 class Person {
 public:
    string name;
   unsigned int age;
 
   void display() {
      cout << "name: " << name << ", age: " << age <<  endl;
   }
 };
 
 class Student : public Person {
 public:
    string studentId;
 
   void display() {
     Person::display();
      cout << "student ID: " << studentId <<  endl;
   }
 };
 
 class Teacher : public Person {
 public:
    string teacherId;
 
   void display() {
     Person::display();
      cout << "teacher ID: " << teacherId <<  endl;
   }
 };
 
 int main() {
   Student s;
   s.name = "yash";
   s.age = 21;
   s.studentId = "2000";
   s.display();
 
   Teacher t;
   t.name = "jane";
   t.age = 33;
   t.teacherId = "2015";
   t.display();
 
   return 0;
 }