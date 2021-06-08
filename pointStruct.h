#pragma once
#include <iostream>

struct point {
    double x = 0, y = 0;
};

point getPoint () {
  point p;
  std::cout << "(X, Y): ";
  std::cin >> p.x >> p.y;
  return p;
}

void show (point p) {
  std::cout << "(" << p.x << ", " << p.y << ")";
}

bool equal (point a, point b) {
  return ((a.x == b.x) && (a.y == b.y));
}
