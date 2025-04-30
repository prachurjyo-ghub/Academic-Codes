#include <iostream>
#include <algorithm>
using namespace std;

int knapsack(int weights[], int values[], int n, int W) {
    int dp[n + 1][W + 1];

    // Build dp table bottom-up
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            // Base case: no item or weight = 0
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weights[i - 1] <= w)
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]],  // Include
                               dp[i - 1][w]);                                 // Exclude
            else
                dp[i][w] = dp[i - 1][w]; // Can't include the item
        }
    }

    return dp[n][W]; // Max value for n items and capacity W
}

int main() {
    int values[] = {60, 100, 120};
    int weights[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(values) / sizeof(values[0]);

    cout << "Maximum value: " << knapsack(weights, values, n, W) << endl;

    return 0;
}
