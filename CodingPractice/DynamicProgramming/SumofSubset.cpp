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

bool sumofSubset(int arr[], int n, int sum)
{
    if(sum == 0)
        return true;
    if(n == 0 && sum != 0)
        return false;

    if(arr[n-1] <= j)
        return sumofSubset(arr,n-1,sum-arr[n-1]) || sumofSubset(arr,n-1,sum);
    else
        return sumofSubset(arr,n-1,sum);
}
//
bool sumofsubsetDP(int arr[], int n, int sum)
{
    bool dp[n+1][sum+1];

    for(int i=0;i<=n;i++)
        dp[i][0] = true;
    for(int i=1;i<=sum;i++)
        dp[0][i] = false;
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

    return dp[n][sum];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {2,3,7,8,10};
    int sum = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    if(sumofSubset(arr,n,sum))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}

// Code By Jasmeet Singh