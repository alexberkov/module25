#include "header.h"

int main() {
  cout << "Welcome!" << endl;
  string command;
  ram r;
  while (true) {
    cout << "Enter command: ";
    cin >> command;
    if (command == "exit") break;
    else if (command == "sum") compute(r);
    else if (command == "save") save(r);
    else if (command == "load") load(r);
    else if (command == "input") input(r);
    else if (command == "display") display(r);
    else cout << "Incorrect command! Try again." << endl;
  }
  cout << "Goodbye!";
  return 0;
}
