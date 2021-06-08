#include "header.h"

void display (ram &r) {
  vector<int> t = read(r);
  if (!t.empty()) {
    cout << "Current RAM: ";
    for (int i: t) cout << i;
    cout << endl;
  } else cout << "RAM is empty." << endl;
}
