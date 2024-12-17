// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a C++/Java program to find the greatest of three given numbers in three different classes using friend function

#include <iostream>

using namespace std;

class B;  // forward declaration
class C;  // forward declaration

class A {
  int a;

 public:
  A(int x) {
    a = x;
  }
  friend int Max(A, B, C);
};

class B {
  int b;

 public:
  B(int x) {
    b = x;
  }
  friend int Max(A, B, C);
};

class C {
  int c;

 public:
  C(int x) {
    c = x;
  }
  friend int Max(A, B, C);
};

int Max(A a, B b, C c) {
  if (a.a >= b.b && a.a >= c.c) {
    return a.a;
  } else if (b.b >= a.a && b.b >= c.c) {
    return b.b;
  } else {
    return c.c;
  }
}

int main() {
  int x, y, z;
  cout << "Enter three numbers: ";
  cin >> x >> y >> z;
  A a(x);
  B b(y);
  C c(z);
  int max = Max(a, b, c);
  cout << "Max: " << max << endl;

  return 0;
}