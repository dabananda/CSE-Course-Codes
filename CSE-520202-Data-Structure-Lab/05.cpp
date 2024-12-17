// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a program that implements all major Stack operations

#include <iostream>

using namespace std;

#define MAX 100

class Stack {
 public:
  int data[MAX], top = -1;

  void Push(int n) {
    if (top >= MAX) {
      cout << "Stack overflow!\n\n";
    } else {
      data[++top] = n;
    }
  }

  void Pop() {
    if (top == -1) {
      cout << "Stack underflow!\n\n";
    } else {
      cout << data[top--] << " poped from the stack\n\n";
    }
  }

  bool IsEmpty() {
    if (top == -1) {
      return true;
    }
    return false;
  }

  void Size() {
    if (top == -1) {
      cout << "Size of the stack is: 0\n\n";
    } else {
      cout << "Size of the stack is: " << top + 1 << "\n\n";
    }
  }

  void Traverse() {
    if (top == -1) {
      cout << "Stack is empty. No data to show!";
    } else {
      cout << "Showing stack data:\n";
      for (int i = 0; i <= top; i++) {
        cout << data[i] << " ";
      }
    }
    cout << "\n\n";
  }
};

int main() {
  Stack s;
  while (true) {
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. IsEmpty\n";
    cout << "4. Size\n";
    cout << "5. Traverse\n";
    cout << "6. Exit\n";
    cout << "Chose an option (1/2/3/4/5/6): ";
    int option, x;
    cin >> option;
    switch (option) {
      case 1:
        cout << "Enter an integer: ";
        cin >> x;
        s.Push(x);
        cout << x << " pushed to the stack.\n\n";
        break;

      case 2:
        s.Pop();
        break;

      case 3:
        cout << "Stack empty: " << s.IsEmpty() << "\n\n";
        break;

      case 4:
        s.Size();
        break;

      case 5:
        s.Traverse();
        break;

      default:
        cout << "Program terminated successfully!\n";
        exit(1);
    }
  }
  return 0;
}