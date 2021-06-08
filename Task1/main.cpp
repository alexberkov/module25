#include "functions.h"

int main() {
  std::string command;
  std::cout << "Operation started." << std::endl;
  while (true) {
    std::cout << "Enter command: " << std::endl;
    std::cin >> command;
    if (command == "scalpel") {
      point start, end;
      scalpel(start, end);
      while (command != "suture") {
        std::cout << "Enter command: ";
        std::cin >> command;
        if (command == "hemostat") hemostat();
        else if (command == "tweezers") tweezers();
        else if (command == "suture") suture(start, end);
        else std::cout << "Incorrect command! Try again." << std::endl;
      }
      break;
    } else {
      std::cout << "Incorrect command! Try again." << std::endl;
      continue;
    }
  }
  std::cout << "Operation ended.";
  return 0;
}
