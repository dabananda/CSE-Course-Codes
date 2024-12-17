// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

/*
Q: Write a class to represent time that includes the member function to perform the following:
  > Take input for time in hours and minutes.
  > Add two times.
  > Display the time in form hours: minutes.
*/

#include <iostream>

using namespace std;

class TIME {
  int hour, minute;

 public:
  void Input();
  friend TIME AddTime(TIME, TIME);
  friend void Print(TIME);
};

void TIME::Input() {
  cout << "Enter time (hour min): ";
  cin >> hour >> minute;
}

TIME AddTime(TIME T1, TIME T2) {
  TIME T3;
  T3.hour = T1.hour + T2.hour + (T1.minute + T2.minute) / 60;
  T3.minute = (T1.minute + T2.minute) % 60;
  return T3;
}

void Print(TIME T) {
  cout << "Total time: " << T.hour << " : " << T.minute << endl;
}

int main() {
  TIME T1, T2, T3;
  T1.Input();
  T2.Input();
  T3 = AddTime(T1, T2);
  Print(T3);
  return 0;
}