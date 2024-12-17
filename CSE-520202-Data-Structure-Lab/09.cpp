// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a program to insert an element into a Linked List

#include <iostream>
using namespace std;

class Node {
 public:
  int data;
  Node *next;
};

Node *root = NULL;

void Insert(int data) {
  if (root == NULL) {
    root = new Node();
    root->data = data;
    root->next = NULL;
  } else {
    Node *current_node = root;
    while (current_node->next != NULL) {
      current_node = current_node->next;
    }
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    current_node->next = new_node;
  }
}

// void Delete(int data) {
//   Node *previous_node = NULL;
//   Node *current_node = root;
//   while (current_node->data != data) {
//     previous_node = current_node;
//     current_node = current_node->next;
//   }
//   if (current_node == root) {
//     Node *temp = root;
//     root = root->next;
//     delete(temp);
//   } else {
//     previous_node->next = current_node->next;
//     delete(current_node);
//   }
// }

void Print() {
  Node *current_node = root;
  while (current_node != NULL) {
    cout << current_node->data << " ";
    current_node = current_node->next;
  }
  cout << endl;
}

int main() {
  int n, data;
  cout << "Data size: ";
  cin >> n;
  cout << "Enter data: ";
  for (int i = 0; i < n; i++) {
    cin >> data;
    Insert(data);
  }
  cout << "Data are: ";
  Print();
  // cout << "Enter a data to delete: ";
  // cin >> data;
  // Delete(data);
  // cout << "Data after deleteing: ";
  // Print();

  return 0;
}