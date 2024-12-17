// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a C++/Java program to enter any number and find its factorial using constructor

#include <iostream>

using namespace std;

class Solution {
  int number, result = 1;

 public:
  Solution(int);
  int Factorial();
  void Print();
};

Solution::Solution(int n) {
  number = n;
};

int Solution::Factorial() {
  for (int i = 2; i <= number; i++) {
    result = result * i;
  }
}

void Solution::Print() {
  cout << "Factorial of " << number << " is: " << result << endl;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  Solution S(n);
  S.Factorial();
  S.Print();

  return 0;
}