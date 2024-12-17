// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Create a class TIME with members hours, minutes and seconds. Take input, add two time objects passing objects to function and display result

#include <iostream>

using namespace std;

class TIME {
  int hour, minute, second;

 public:
  void GetTime();
  friend void Print(TIME);
  friend TIME AddTime(TIME, TIME);
};

void TIME::GetTime() {
  cout << "Enter time (hour min sec): ";
  cin >> hour >> minute >> second;
}

void Print(TIME T) {
  cout << "Total time: " << T.hour << "h " << T.minute << "min " << T.second << "s" << endl;
}

TIME AddTime(TIME T1, TIME T2) {
  TIME T3;
  int total_time = T1.hour * 3600 + T2.hour * 3600 + (T1.minute * 60) + (T2.minute * 60) + T1.second + T2.second;
  T3.hour = total_time / 3600;
  T3.minute = (total_time - (T3.hour * 3600)) / 60;
  T3.second = total_time - ((T3.hour * 3600) + (T3.minute * 60));
  return T3;
}

int main() {
  TIME T1, T2, T3;
  T1.GetTime();
  T2.GetTime();
  T3 = AddTime(T1, T2);
  Print(T3);
  return 0;
}