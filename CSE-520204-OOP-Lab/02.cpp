// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a C++/Java program to swap two numbers declared in two different classes using friend function

#include <iostream>

using namespace std;

class B;  // forward declaration

class A {
  int a;

 public:
  A(int x) {
    a = x;
  }
  friend void Swap(A&, B&);
  friend void Print(A, B);
};

class B {
  int b;

 public:
  B(int x) {
    b = x;
  }
  friend void Swap(A&, B&);
  friend void Print(A, B);
};

void Swap(A& a, B& b) {
  int temp;
  temp = a.a;
  a.a = b.b;
  b.b = temp;
}

void Print(A a, B b) {
  cout << "After swaping" << endl;
  cout << "A: " << a.a << endl;
  cout << "B: " << b.b << endl;
}

int main() {
  int x, y;
  cout << "Enter values" << endl;
  cout << "A: ";
  cin >> x;
  cout << "B: ";
  cin >> y;
  A a(x);
  B b(y);
  Swap(a, b);
  Print(a, b);

  return 0;
}