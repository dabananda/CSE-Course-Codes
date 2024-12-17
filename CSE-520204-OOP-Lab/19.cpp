// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a program to read two files simultaneously

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  char c1[100], c2[100];

  ifstream infile1;
  infile1.open("19-a.txt");
  infile1.getline(c1, 100);
  infile1.close();

  ofstream outfile1;
  outfile1.open("19-c.txt", ios::out | ios::app);
  outfile1 << c1 << endl;
  outfile1.close();

  ifstream infile2;
  infile2.open("19-b.txt");
  infile2.getline(c2, 100);
  infile2.close();

  ofstream outfile2;
  outfile2.open("19-c.txt", ios::out | ios::app);
  outfile2 << c2 << endl;
  outfile2.close();

  return 0;
}