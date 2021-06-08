#pragma once
#include "pointStruct.h"


void scalpel (point &start, point &end) {
  std::cout << "Enter two points: ";
  point a = getPoint(), b = getPoint();
  std::cout << "The cut was made between ";
  show(a);
  std::cout << " and ";
  show(b);
  std::cout << "." << std::endl;
  start = a;
  end = b;
}

void hemostat () {
  std::cout << "Enter application point: ";
  point a = getPoint();
  std::cout << "Hemostat was applied at: ";
  show(a);
  std::cout << "." << std::endl;
}

void tweezers () {
  std::cout << "Enter application point: ";
  point a = getPoint();
  std::cout << "Tweezers was applied at: ";
  show(a);
  std::cout << "." << std::endl;
}

void suture (const point &start, const point &end) {
  while (true) {
    std::cout << "Enter two points: ";
    point a = getPoint(), b = getPoint();
    if (equal(a, start) && equal(b, end)) {
      std::cout << "The cut was sawed between ";
      show(a);
      std::cout << " and ";
      show(b);
      std::cout << "." << std::endl;
      break;
    } else {
      std::cout << "Wrong coordinates! Try again." << std::endl;
      continue;
    }
  }
}


