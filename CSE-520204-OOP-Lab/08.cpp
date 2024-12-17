// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a C++/Java program to find the square and cube of a number read from keyboard. (Demonstrate the concept of inheritance)

#include <iostream>

using namespace std;

class Number {
  int number;

 public:
  void SetNumber(int n) {
    number = n;
  }
  int GetNumber() {
    return number;
  }
};

class Square : public Number {
 public:
  int GetSquare() {
    int n;
    n = GetNumber();
    n = n * n;
    return n;
  }
};

class Cube : public Number {
 public:
  int GetCube() {
    int n;
    n = GetNumber();
    n = n * n * n;
    return n;
  }
};

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  Square sq;
  sq.SetNumber(n);
  Cube cb;
  cb.SetNumber(n);
  cout << "Square: " << sq.GetSquare() << endl;
  cout << "Cube: " << cb.GetCube() << endl;

  return 0;
}