// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a program to search an element from the entered array by the Binary Search Algorithm

#include <iostream>

using namespace std;

// recursive method
int BinarySearch(int array[], int data, int low, int high) {
  if (low > high) {
    return -1;
  } else {
    int mid = (low + high) / 2;
    if (data == array[mid]) {
      return mid;
    } else if (data > array[mid]) {
      BinarySearch(array, data, mid + 1, high);
    } else {
      BinarySearch(array, data, low, mid - 1);
    }
  }
}

// iteration method
// int BinarySearch(int array[], int n, int data) {
//   int low, high, mid;
//   low = 0, high = n - 1;
//   while (low <= high) {
//     mid = (low + high) / 2;
//     if (data == array[mid]) {
//       return mid;
//     } else if (data > array[mid]) {
//       low = mid + 1;
//     } else {
//       high = mid - 1;
//     }
//   }
//   return -1;
// }

int main() {
  int n;
  // cout << "Enter array size: ";
  cin >> n;

  int array[n];
  // cout << "Enter array elements: ";
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  int data;
  // cout << "Enter a number to find: ";
  cin >> data;

  // recrusive method call
  int index = BinarySearch(array, data, 0, n - 1);
  // iteration method call
  // int index = BinarySearch(array, n, data);

  if (index == -1) {
    cout << "Data not found!\n";
  } else {
    cout << "Data found at index " << index << "\n";
  }

  return 0;
}