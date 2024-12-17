// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a C++/Java program for calculating the area of triangle, circle and rectangle using the concept of function overloading

#include <iomanip>
#include <iostream>

using namespace std;

class Solution {
 public:
  // triangle
  double Area(double base, double height, double K);
  // circle
  double Area(double redius);
  // rectangle
  double Area(double length, double width);
  // display result
  void Result(double result);
};

double Solution::Area(double base, double height, double K) {
  return K * base * height;
}

double Solution::Area(double radius) {
  return 3.14159 * radius * radius;
}

double Solution::Area(double length, double width) {
  return length * width;
}

void Solution::Result(double result) {
  cout << fixed << setprecision(2);
  cout << "Area: " << result << endl;
  cout << endl;
}

int main() {
  Solution A;
  while (true) {
    int option;
    double base, height, radius, length, width, result, K = 0.5;
    cout << "1. Area of triangle\n";
    cout << "2. Area of circle\n";
    cout << "3. Area of rectangle\n";
    cout << "4. Exit\n";
    cout << "Chose an option (1/2/3/4): ";
    cin >> option;
    switch (option) {
      case 1:
        cout << "Enter base and height for triangle: ";
        cin >> base >> height;
        result = A.Area(base, height, K);
        A.Result(result);
        break;

      case 2:
        cout << "Enter radius for circle: ";
        cin >> radius;
        result = A.Area(radius);
        A.Result(result);
        break;

      case 3:
        cout << "Enter length and width for rectangle: ";
        cin >> length >> width;
        result = A.Area(length, width);
        A.Result(result);
        break;

      default:
        cout << "The program has been terminated successfully!\n";
        exit(1);
    }
  }
  return 0;
}