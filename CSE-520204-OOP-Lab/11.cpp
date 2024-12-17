// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a program that finds the volume of different shapes (like rectangle, cylinder, cube) using function overloading

#include <iomanip>
#include <iostream>

using namespace std;

class Solution {
 public:
  // rectangle
  double Volume(double length, double width, double height);
  // cylinder
  double Volume(double radius, double height);
  // cube
  double Volume(double edge);
  void Result(double result);
};

double Solution::Volume(double length, double width, double height) {
  return length * width * height;
}

double Solution::Volume(double radius, double height) {
  return 3.14159 * radius * radius * height;
}

double Solution::Volume(double edge) {
  return edge * edge * edge;
}

void Solution::Result(double result) {
  cout << fixed << setprecision(2);
  cout << "Volume: " << result << endl;
  cout << endl;
}

int main() {
  Solution A;
  while (true) {
    int option;
    double height, radius, length, width, edge, result;
    cout << "1. Volume of rectangle\n";
    cout << "2. Volume of cylinder\n";
    cout << "3. Volume of cube\n";
    cout << "4. Exit\n";
    cout << "Chose an option (1/2/3/4): ";
    cin >> option;
    switch (option) {
      case 1:
        cout << "Enter length, width and height for rectangle: ";
        cin >> length >> width >> height;
        result = A.Volume(length, width, height);
        A.Result(result);
        break;

      case 2:
        cout << "Enter radius and height for cylinder: ";
        cin >> radius >> height;
        result = A.Volume(radius, height);
        A.Result(result);
        break;

      case 3:
        cout << "Enter edge for cube: ";
        cin >> edge;
        result = A.Volume(edge);
        A.Result(result);
        break;

      default:
        cout << "The program has been terminated successfully!\n";
        exit(1);
    }
  }
  return 0;
}