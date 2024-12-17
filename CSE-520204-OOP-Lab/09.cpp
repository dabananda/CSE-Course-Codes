// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a C++/Java program to append the contents of a file into another

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  char contents[100];
  ifstream obj;
  // reading from "a.txt"
  obj.open("a.txt");
  // storing to "contents"
  obj.getline(contents, 100);

  ofstream file;
  // creating "b.txt" file with write and apped mode
  file.open("b.txt", ios::out | ios::app);
  // storing the contents
  file << contents << endl;

  // closing files
  obj.close();
  file.close();

  return 0;
}