#include "header.h"

void input (ram &r) {
  vector<int> t;
  int n;
  cout << "Enter numbers in RAM: ";
  for (int i = 0; i < 8; i++) {
    cin >> n;
    t.push_back(n);
  }
  write(t, r);
}

