// Problem 5
int** transposed(int** arr, int n, int m) {
    int** transposedArr = new int*[m];
    for (int i = 0; i < m; ++i) {
        transposedArr[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            transposedArr[i][j] = arr[j][i];
        }
    }
    return transposedArr;
}

void printVector(const vector<int>& v) {
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

