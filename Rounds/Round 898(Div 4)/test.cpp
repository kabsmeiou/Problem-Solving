#include <iostream>
using namespace std;
int main() {
    int n = 10; 
    int matrix[10][10];

    for (int layer = 0; layer < n / 2 + 1; ++layer) {
        int value = layer + 1;
        for (int i = layer; i < n - layer; ++i) {
            matrix[layer][i] = value;
            matrix[n - layer - 1][i] = value;
        }
        for (int i = layer + 1; i < n - layer - 1; ++i) {
            matrix[i][layer] = value;
            matrix[i][n - layer - 1] = value;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}