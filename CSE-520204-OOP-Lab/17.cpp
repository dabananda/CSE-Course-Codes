// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <iostream>

using namespace std;

class area_cl {
 public:
  double height;
  double width;
};

class rectangle : public area_cl {
 public:
  rectangle(double h, double w) {
    height = h, width = w;
  }
  double area() {
    return height * width;
  }
};

class isosceles : public area_cl {
 public:
  isosceles(double h, double w) {
    height = h, width = w;
  }
  double area() {
    return 0.5 * height * width;
  }
};

int main() {
  int height, width;
  cin >> height >> width;
  rectangle r(height, width);
  cout << "Rectangle area: " << r.area() << endl;
  isosceles i(height, width);
  cout << "Isosceles area: " << i.area() << endl;
  
  return 0;
}