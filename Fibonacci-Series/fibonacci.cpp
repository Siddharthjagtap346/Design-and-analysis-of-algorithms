#include <iostream>
#include <chrono> // For measuring time
#include <cmath>  // For sqrt and pow (Binet's formula)
using namespace std;
using namespace std::chrono;

// Global variable to count steps for recursion
int recursiveSteps = 0;

// Recursive Fibonacci function with step count
int fibonacciRecursive(int n) {
    recursiveSteps++;
    if (n <= 1)
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Iterative Fibonacci with step count
int fibonacciIterative(int n, int &iterativeSteps) {
    if (n <= 1) {
        iterativeSteps++;
        return n;
    }
    int a = 0, b = 1, c;
    iterativeSteps += 2; // a and b initialization
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
        iterativeSteps++; // each loop counts as a step
    }
    return b;
}

// Non-recursive using Binet's Formula with step count
int fibonacciFormula(int n, int &formulaSteps) {
    formulaSteps++; // count each call as one step
    double phi = (1 + sqrt(5)) / 2;
    double psi = (1 - sqrt(5)) / 2;
    return round((pow(phi, n) - pow(psi, n)) / sqrt(5));
}

int main() {
    int n;
    cout << "Enter the Fibonacci number index (n): ";
    cin >> n;

    // === Recursive Method ===
    recursiveSteps = 0;
    auto startRec = high_resolution_clock::now();
    cout << "\nFibonacci Series (Recursive): ";
    for (int i = 0; i <= n; i++)
        cout << fibonacciRecursive(i) << " ";
    auto endRec = high_resolution_clock::now();
    auto durationRec = duration_cast<microseconds>(endRec - startRec);
    cout << "\nRecursive Steps: " << recursiveSteps;
    cout << "\nTime Taken (Recursive): " << durationRec.count() << " microseconds";

    // === Iterative Method ===
    int iterativeSteps = 0;
    auto startIter = high_resolution_clock::now();
    cout << "\n\nFibonacci Series (Iterative): ";
    for (int i = 0; i <= n; i++)
        cout << fibonacciIterative(i, iterativeSteps) << " ";
    auto endIter = high_resolution_clock::now();
    auto durationIter = duration_cast<microseconds>(endIter - startIter);
    cout << "\nIterative Steps: " << iterativeSteps;
    cout << "\nTime Taken (Iterative): " << durationIter.count() << " microseconds";

    // === Non-Recursive (Formula) Method ===
    int formulaSteps = 0;
    auto startForm = high_resolution_clock::now();
    cout << "\n\nFibonacci Series (Non-Recursive using Binet's Formula): ";
    for (int i = 0; i <= n; i++)
        cout << fibonacciFormula(i, formulaSteps) << " ";
    auto endForm = high_resolution_clock::now();
    auto durationForm = duration_cast<microseconds>(endForm - startForm);
    cout << "\nFormula Steps: " << formulaSteps;
    cout << "\nTime Taken (Formula): " << durationForm.count() << " microseconds\n";

    return 0;
}
