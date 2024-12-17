// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q : Write a program that calculates the total number of characters, digits and special characters from a line of text

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string text;
  cin >> text;
  int chars = 0, digits = 0, special_chars = 0;
  for (int i = 0; i < text.length(); i++) {
    if (text[i] >= 65 && text[i] <= 90 || text[i] >= 97 && text[i] <= 122) {
      chars++;
    } else if (text[i] >= 48 && text[i] <= 57) {
      digits++;
    } else {
      special_chars++;
    }
  }
  cout << "Number of characters: " << chars << endl;
  cout << "Number of digits: " << digits << endl;
  cout << "Number of special characters: " << special_chars << endl;

  return 0;
}