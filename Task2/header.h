#pragma once
#include <vector>
#include <iostream>

using namespace std;

struct ram {
    vector<int> v;
};

void compute (ram &r);
void save (ram &r);
void load (ram &r);
void display (ram &r);
void input (ram &r);
void write(vector<int> &t, ram &r);
vector<int> read(ram &r);

