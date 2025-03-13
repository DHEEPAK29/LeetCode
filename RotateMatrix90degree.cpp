#include <iostream>

using namespace std;

const int N = 3; // Define the size of the matrix

void rotate(int matrix[N][N]) {
    // Step 1: Transpose the matrix
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    // Step 2: Reverse each row
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N / 2; ++j) {
            swap(matrix[i][j], matrix[i][N - j - 1]);
        }
    }
}

// Function to print the matrix
void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "Original Matrix:\n";
    printMatrix(matrix);
    
    rotate(matrix);
    
    cout << "\nRotated Matrix:\n";
    printMatrix(matrix);
    
    return 0;
}
