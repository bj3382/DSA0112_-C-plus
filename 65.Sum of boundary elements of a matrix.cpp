#include <iostream>
using namespace std;

int boundarySum(int mat[3][3], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
                sum += mat[i][j];
        }
    }
    return sum;
}

int main() {
    int n = 3, mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Sum of boundary elements: " << boundarySum(mat, n) << endl;
    return 0;
}
