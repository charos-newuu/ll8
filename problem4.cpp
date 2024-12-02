// Problem 4
int* reallocate(int* arr, int N, int n) {
    int* newArr = new int[N - n];
    for (int i = 0; i < N - n; ++i) {
        newArr[i] = arr[n + i];
    }
    delete[] arr;
    return newArr;
}
