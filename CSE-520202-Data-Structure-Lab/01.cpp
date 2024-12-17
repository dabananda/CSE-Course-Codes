// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a program to find the maximum and minimum value from a given array

#include <iostream>

using namespace std;

int main() {
  int array[10] = {7, 5, 2, 3, 1, 6, 9, 4, 8, 10};
  int minimum, maximum;
  minimum = maximum = array[0];
  for (int i = 1; i < 10; i++) {
    if (array[i] < minimum) {
      minimum = array[i];
    }
    if (array[i] > maximum) {
      maximum = array[i];
    }
  }
  cout << "Minimum value: " << minimum << endl;
  cout << "Maximum value: " << maximum << endl;

  return 0;
}