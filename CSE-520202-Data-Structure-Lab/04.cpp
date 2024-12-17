// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a program that implements Tower of Hanoi problem by using a recursive function

#include <iostream>

using namespace std;

void TowerOfHanoi(int n, char beg, char aux, char end) {
  if (n == 0) {
    return;
  }
  TowerOfHanoi(n - 1, beg, end, aux);
  cout << "Move disk " << n << " from " << beg << " to " << end << endl;
  TowerOfHanoi(n - 1, aux, beg, end);
}

int main() {
  int n;
  cout << "Number of disks: ";
  cin >> n;
  TowerOfHanoi(n, 'A', 'B', 'C');
  return 0;
}