#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// Problem 3.1
int* allocateAndSet(int a, int b) {
    if (a > b) return nullptr;
    int* arr = new int[b - a + 1];
    for (int i = 0; i <= b - a; ++i) {
        arr[i] = a + i;
    }
    return arr;
}

// Problem 3.2
void deallocate(int* arr) {
    delete[] arr;
    arr = nullptr;
}