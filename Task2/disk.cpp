#include "header.h"
#include <fstream>

void save (ram &r) {
  ofstream file ("../SSD.txt");
  if (file.is_open()) {
    vector<int> data = read(r);
    for (int i: data) file << i << " ";
    file.close();
  } else cout << "Error! Unable to save RAM." << endl;
}

void load (ram &r) {
  ifstream file ("../SSD.txt");
  if (file.is_open()) {
    int n;
    vector<int> t;
    while (file >> n) t.push_back(n);
    write(t, r);
    file.close();
  } else cout << "Error! Unable to load RAM." << endl;
}
