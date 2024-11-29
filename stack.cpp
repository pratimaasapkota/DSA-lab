#include <iostream>
using namespace std;
#define n 10
class Stack {
 public:
  int top;
  int arr[n];
  Stack() { top = -1; }
  void push() {
    int temp;
    if (top == n - 1) {
      cout << "stack overflow";
    }
    top++;
    cout << "enter a number to push" << endl;
    cin >> temp;
    arr[top] = temp;
  }
  void pop() {
    if (top == -1) {
      cout << "there is nothing to pop" << endl;
    }
    top--;
  }
  void display() {
    if (top == -1) {
      cout << "there is nothing to display" << endl;
    }
    cout << arr[top] << endl;
  }
};

int main() {
  int key;
  Stack obj;
  while (key != 4) {
    cout << "1 for push, 2 for pop , 3 for display and 4 for quit" << endl;
    cin >> key;
    switch (key) {
      case 1:
        obj.push();
        break;
      case 2:
        obj.pop();
        break;
      case 3:
        obj.display();
        break;
      case 4:
        break;
    }
  }
}