#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Problem 1:
void delete11(vector<int> &v) {
    v.erase(remove_if(v.begin(), v.end(), [](int x) { return x % 11 == 0; }), v.end());
}