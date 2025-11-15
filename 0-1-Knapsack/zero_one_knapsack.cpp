#include <iostream>
using namespace std;

int main() {
    int n, cap;
    cout << "Enter number of items: ";
    cin >> n;

    int wt[n], val[n];
    cout << "Enter weight and profit of each item:\n";
    for(int i = 0; i < n; i++)
        cin >> wt[i] >> val[i];

    cout << "Enter knapsack capacity: ";
    cin >> cap;

    int dp[n+1][cap+1];

    for(int i = 0; i <= n; i++) {
        for(int w = 0; w <= cap; w++) {
            if(i == 0 || w == 0)
                dp[i][w] = 0;
            else if(wt[i-1] <= w)
                dp[i][w] = max(val[i-1] + dp[i-1][w - wt[i-1]], dp[i-1][w]);
            else
                dp[i][w] = dp[i-1][w];
        }
    }

    cout << "\nMaximum Profit = " << dp[n][cap] << endl;
    return 0;
}
