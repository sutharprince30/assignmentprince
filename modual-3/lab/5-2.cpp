/* Write a C++ program to perform matrix addition on two 2x2 matrices. */

#include <iostream>
using namespace std;

int main() {
  const int ROWS = 2;
  const int COLS = 2;

  int matrix1[ROWS][COLS];
  int matrix2[ROWS][COLS];
  int res[ROWS][COLS];

   cout << "enter the elements of the first 2x2 matrix:" <<  endl;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
       cout << "matrix1[" << i << "][" << j << "]: ";
       cin >> matrix1[i][j];
    }
  }

   cout << "enter the elements of the second 2x2 matrix:" <<  endl;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
       cout << "matrix2[" << i << "][" << j << "]: ";
       cin >> matrix2[i][j];
    }
  }

   cout << "sum of the matrices:" <<  endl;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      res[i][j] = matrix1[i][j] + matrix2[i][j];
       cout << res[i][j] << " ";
    }
     cout <<  endl;
  }

  return 0;
}