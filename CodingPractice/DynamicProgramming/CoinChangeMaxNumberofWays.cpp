#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

int maxChangeCoins(int coins[], int n, int sum)
{
    if(n == 0)
        return 0;
    if(sum == 0)
        return 1;
    if(coins[n-1] <= sum)
        return maxChangeCoins(coins,n,sum-coins[n-1])+maxChangeCoins(coins,n-1,sum);
    else
        return maxChangeCoins(coins,n-1,sum);
}

int maxChangeCoinsDP(int coins[], int n, int sum) {
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
        dp[i][0] = 1;
    for(int i=0;i<=sum;i++)
        dp[0][i] = 0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(coins[i-1]<=j)
                dp[i][j] = dp[i-1][j] + dp[i][j-coins[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int coins[] = {1,2,3};
    int sum = 5;
    int n = sizeof(coins)/sizeof(coins[0]);
    cout<<maxChangeCoins(coins,n, sum)<<endl;
    cout<<maxChangeCoinsDP(coins,n, sum);
    return 0;
}

// Code By Jasmeet Singh