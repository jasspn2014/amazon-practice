#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;


int maxProfit(int wt[], int profit[], int N, int W)
{
    int dp[N+1][W+1];
    for(int i=0;i<=N;i++)
        dp[i][0] = 0;
    for(int i=0;i<=W;i++)
        dp[0][i] = 0;

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=W;j++)
        {
            if(wt[i-1]<=j)
                dp[i][j] = max(profit[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    return dp[N][W];

}

void solve()
{
    int n;
    cin>>n;
    int wt[n];
    int profit[n];
    for(int i=0;i<n;i++){
        wt[i] = i+1;
    }

    for(int i=0;i<n;i++)
        cin>>profit[i];

    cout<<maxProfit(wt,profit,n,n);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
    //Code by Jasmeet Singh (jasspn2014)
}