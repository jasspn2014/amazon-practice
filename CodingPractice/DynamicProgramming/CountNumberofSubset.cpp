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

int CountNumberofSubset(int arr[], int n, int sum)
{
    if(sum == 0)
        return 1;
    if(n == 0 && sum != 0)
        return 0;

    if(arr[n-1] <= sum)
             else
        return CountNumberofSubset(arr,n-1,sum);
}

int CountNumberofSubsetDP(int arr[], int n, int sum)
{
    int dp[n+1][sum+1];

    for(int i=0;i<=n;i++)
        dp[i][0] = 1;
    for(int i=1;i<=sum;i++)
        dp[0][i] = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]]; // return sumofsubset(arr,n-1,sum-arr[n-1]) || subset(arr,n-1,sum);
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n][sum];
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {10,5,1,0,2};
    int sum = 6;


    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<CountNumberofSubsetDP(arr,n,sum);
    return 0;
}

// Code By Jasmeet Singh