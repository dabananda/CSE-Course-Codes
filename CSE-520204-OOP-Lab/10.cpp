// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a C++/Java program to read a set of lines from the keyboard and to store it in a specific file

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  string contents;
  cout << "Enter someting: ";
  getline(cin, contents);
  
  ofstream file;
  file.open("10.txt", ios::out | ios::app);
  file << contents << endl;
  file.close();

  return 0;
}