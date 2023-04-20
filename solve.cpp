#include<iostream>
using namespace std;
void diamond(int p) {
// the top half of the hollow diamond pattern including the code to print tp left triangle and the top right triangle
  for (int k = 0; k < p; k++) {
    for (int j = 0; j < (2 * p); j++) {
      if (k + j <= p - 1) 
        cout << "*";
      else
        cout << " ";

      if ((k + p) <= j) 
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
  }
  // the bottom half of the pattern including the code to print bottom left triangle and right triangle
  for (int k = 0; k < p; k++) {
    for (int j = 0; j < (2 * p); j++) {
      if (k >= j) 
        cout << "*";
      else
        cout << " ";
      if (k >= ((2 * p) - 1) - j) 
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
  }
}
int main() {
  int Number_of_rows;
  cout << "Enter number of rows to print in the hollow diamond pattern :";
  cin >> Number_of_rows;
  diamond(Number_of_rows);
  return 0;
}