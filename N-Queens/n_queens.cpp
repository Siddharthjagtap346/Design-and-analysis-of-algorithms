#include <bits/stdc++.h>
using namespace std;

bool isSafe(int **arr, int x, int y, int n) {
    for (int row = 0; row < x; row++)
        if (arr[row][y] == 1) return false;

    int row = x, col = y;
    while (row >= 0 && col >= 0)
        if (arr[row--][col--] == 1) return false;

    row = x; col = y;
    while (row >= 0 && col < n)
        if (arr[row--][col++] == 1) return false;

    return true;
}

void printBoard(int **arr, int n, int &solutionCount) {
    cout << "Solution " << ++solutionCount << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << (arr[i][j] == 1 ? " Q " : " . ");
        cout << endl;
    }
    cout << endl;
}

void nQueen(int **arr, int x, int n, int &solutionCount) {
    if (x == n) {
        printBoard(arr, n, solutionCount);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(arr, x, col, n)) {
            arr[x][col] = 1;
            nQueen(arr, x + 1, n, solutionCount);
            arr[x][col] = 0; // backtrack
        }
    }
}

int main() {
    int n;
    cout << "Enter N (number of queens): ";
    cin >> n;

    int **arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n]{0};
    }

    int solutionCount = 0;
    nQueen(arr, 0, n, solutionCount);

    if (solutionCount == 0)
        cout << "No solutions exist for N = " << n << endl;
    else
        cout << "Total Solutions = " << solutionCount << endl;

    for (int i = 0; i < n; i++) delete[] arr[i];
    delete[] arr;

    return 0;
}
