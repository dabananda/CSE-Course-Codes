// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Create a class float that contains one float number. Overload all the arithmetic operators for two objects.

#include <iostream>

using namespace std;

class Float {
  float number;

 public:
  Float() {}
  Float(float n) {
    number = n;
  }
  void Print() {
    cout << number << endl;
  }
  Float operator+(Float& obj) {
    Float x;
    x.number = this->number + obj.number;
    return x;
  }
  Float operator-(Float& obj) {
    Float x;
    x.number = this->number - obj.number;
    return x;
  }
  Float operator*(Float& obj) {
    Float x;
    x.number = this->number * obj.number;
    return x;
  }
  Float operator/(Float& obj) {
    Float x;
    x.number = this->number / obj.number;
    return x;
  }
};

int main() {
  float x, y;
  cout << "Enter two numbers: ";
  cin >> x >> y;

  Float a(x), b(y), result;

  cout << "Summation: ";
  result = a + b;
  result.Print();

  cout << "Substraction: ";
  result = a - b;
  result.Print();

  cout << "Multiplication: ";
  result = a * b;
  result.Print();

  cout << "Division: ";
  result = a / b;
  result.Print();

  return 0;
}