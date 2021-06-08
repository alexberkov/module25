#include "header.h"

void write(vector<int> &t, ram &r) {
  r.v = t;
}

vector<int> read(ram &r) {
  vector<int> t = r.v;
  return t;
}

