// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a C++/Java program to perform addition of two complex numbers using constructor overloading

#include <iostream>

using namespace std;

class Complex {
  int real, imag;

 public:
  Complex(){};
  Complex(int a);
  Complex(int a, int b);
  friend Complex Sum(Complex, Complex);
  void Result(Complex, Complex, Complex);
};

Complex::Complex(int a) {
  real = imag = a;
}

Complex::Complex(int a, int b) {
  real = a, imag = b;
}

Complex Sum(Complex A, Complex B) {
  Complex C;
  C.real = A.real + B.real;
  C.imag = A.imag + B.imag;
  return C;
}

void Complex::Result(Complex A, Complex B, Complex C) {
  cout << "A = " << A.real << " + " << A.imag << "i\n";
  cout << "B = " << B.real << " + " << B.imag << "i\n";
  cout << "Sum: " << C.real << " + " << C.imag << "i\n";
}

int main() {
  int a, b;
  cout << "Enter two values: ";
  cin >> a >> b;
  Complex A(a);
  Complex B(a, b);
  Complex C = Sum(A, B);
  C.Result(A, B, C);
  return 0;
}