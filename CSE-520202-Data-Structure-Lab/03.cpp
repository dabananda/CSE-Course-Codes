// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a program to implement first pattern matching algorithm

#include <iostream>
#include <string>

using namespace std;

int FirstPatternMatch(string text, string patten) {
  int s = text.length(), r = patten.length();
  int k = 1, max = s - r + 1, l, count, location = -1;
  while (k <= max) {
    count = 0, location = k;
    for (l = 0; l < r; l++) {
      if (patten[l] != text[k + l - 1]) {
        location = -1;
        break;
      } else {
        count++;
      }
    }
    k = k + 1;
    if (count == r) {
      break;
    }
  }
  return location;
}

int main() {
  string text, pattern;
  cin >> text >> pattern;
  int index = FirstPatternMatch(text, pattern);
  if (index == -1) {
    cout << "Pattern not found" << endl;
  } else {
    cout << "Pattern matched at index: " << index - 1 << endl;
  }
  return 0;
}