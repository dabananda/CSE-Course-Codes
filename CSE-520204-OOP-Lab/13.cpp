// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Create a class called COMPLEX that has two private data called real and imaginary. Include constructor function to input real & imaginary values, show() to display COMPLEX numbers. Write a program to add two COMPLEX numbers

#include <iostream>

using namespace std;

class COMPLEX {
  int real, imaginary;

 public:
  COMPLEX(){};
  COMPLEX(int a, int b);
  friend COMPLEX Add(COMPLEX, COMPLEX);
  void Show(COMPLEX, COMPLEX, COMPLEX);
};

COMPLEX::COMPLEX(int a, int b) {
  real = a, imaginary = b;
}

COMPLEX Add(COMPLEX A, COMPLEX B) {
  COMPLEX C;
  C.real = A.real + B.real;
  C.imaginary = A.imaginary + B.imaginary;
  return C;
}

void COMPLEX::Show(COMPLEX A, COMPLEX B, COMPLEX C) {
  cout << "A = " << A.real << " + " << A.imaginary << "i\n";
  cout << "B = " << B.real << " + " << B.imaginary << "i\n";
  cout << "Sum: " << C.real << " + " << C.imaginary << "i\n";
}

int main() {
  int a, b;
  cout << "Enter two values for object 1: ";
  cin >> a >> b;
  COMPLEX A(a, b);
  cout << "Enter two values for object 2: ";
  cin >> a >> b;
  COMPLEX B(a, b);
  COMPLEX C = Add(A, B);
  C.Show(A, B, C);

  return 0;
}