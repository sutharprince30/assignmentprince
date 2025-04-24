/* Write a C++ program that accepts an array of integers, calculates the sum and
 * average, and displays the results. */

 #include <iostream>
 using namespace std;

 int main() {
   int size;
 
    cout << "enter the size of the array: ";
    cin >> size;
 
   // dynamically allocate the array
   int *arr = new int[size];
 
    cout << "enter the elements of the array:" <<  endl;
   for (int i = 0; i < size; i++) {
      cout << "arr[" << i << "]: ";
      cin >> arr[i];
   }
 
   unsigned int sum = 0;
 
   for (unsigned int i = 0; i < size; i++) {
     sum += arr[i];
   }
 
    cout << "sum of the array elements: " << sum <<  endl;
    cout << "average of the array elements: " << sum / size <<  endl;
 
   return 0;
 }