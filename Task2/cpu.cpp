#include "header.h"

void compute (ram &r) {
  int res = 0;
  vector<int> t = read(r);
  if (!t.empty()) {
    for (int i: t) res += i;
    cout << "CPU: " << res << endl;
  } else cout << "RAM is empty." << endl;
}

