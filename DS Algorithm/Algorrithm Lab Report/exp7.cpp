#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findMinCoins(int coins[], int n, int amount)
{
    vector<int> result;
    sort(coins, coins + n);
    for (int i = n - 1; i >= 0; i--)
    {
        while (amount >= coins[i])
        {
            amount -= coins[i];
            result.push_back(coins[i]);
        }
    }
    cout << "Minimum coins needed: ";
    for (int coin : result)

        cout << coin << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter number of coins: ";
    cin >> n;
    cout << "Coiins :";
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    findMinCoins(coins, n, amount);
    return 0;
}
