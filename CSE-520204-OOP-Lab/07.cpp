// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Create a class student which has data members as name, semester, roll no, section and marks in five subjects. Write a C++/Java program to display all information of the students with total marks

#include <iostream>
#include <vector>

using namespace std;

class Student {
  string name, semester, roll, section;
  int marks[5], total_marks = 0;

 public:
  void Input() {
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter semester: ";
    getline(cin, semester);
    cout << "Enter roll: ";
    getline(cin, roll);
    cout << "Enter section: ";
    getline(cin, section);
    cout << "Enter 5 marks: ";
    for (int i = 0; i < 5; i++) {
      cin >> marks[i];
    }
  }
  void Marks() {
    for (int i = 0; i < 5; i++) {
      total_marks += marks[i];
      cout << marks[i] << " ";
    }
    cout << endl;
  }
  void Print() {
    cout << "\nShowing student information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Semester: " << semester << endl;
    cout << "Roll: " << roll << endl;
    cout << "Section: " << section << endl;
    cout << "Marks: ";
    Marks();
    cout << "Total marks: " << total_marks << endl;
  }
};

int main() {
  Student s;
  s.Input();
  s.Print();

  return 0;
}