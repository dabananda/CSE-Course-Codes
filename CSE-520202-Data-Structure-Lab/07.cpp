// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a program to implement the Quick Sort algorithm

#include <algorithm>
#include <iostream>

using namespace std;

// user defined swapping function
// void Swap(int *a, int *b) {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

int Partition(int array[], int low, int high) {
  int pivot = array[high], index = low - 1;
  for (int i = low; i < high; i++) {
    if (array[i] < pivot) {
      swap(array[++index], array[i]);
      // Swap(&array[++index], &array[i]);
    }
  }
  swap(array[++index], array[high]);
  // Swap(&array[++index], &array[high]);
  return index;
}

void QuickSort(int array[], int low, int high) {
  if (low >= high) {
    return;
  }
  int p = Partition(array, low, high);
  QuickSort(array, low, p - 1);
  QuickSort(array, p + 1, high);
}

int main() {
  int n;
  cin >> n;
  int *array = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  QuickSort(array, 0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}