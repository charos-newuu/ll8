#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// Problem 2:
void insertMany(vector<int> &v, int y, int x) {
    int middle = (v.size() % 2 == 0) ? v.size() / 2 : (v.size() / 2) + 1;
    v.insert(v.begin() + middle, y, x);
}