#include <iostream>
#include <vector>
using namespace std;

int countWays(int coins[], int n, int amount)
{
    vector<int> dp(amount + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = coins[i]; j <= amount; j++)
        {
            dp[j] += dp[j - coins[i]];
        }
    }
    return dp[amount];
}

int main()
{
    int n;
    cout << "Enter number of coins: ";
    cin >> n;
    int coins[n];
    cout << "Enter coin denominations: ";
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    int amount;
    cout << "Enter amount: ";
    cin >> amount;
    cout << "Number of ways: " << countWays(coins, n, amount) << endl;
    return 0;
}
