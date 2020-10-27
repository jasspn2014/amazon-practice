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
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
        dp[i][0] = true;

    for(int i=1;i<=sum;i++)
        dp[0][i] = false;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[n-1] <= j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
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
    int arr[] = {6,1,12,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<n;i++)
        sum += arr[i];

    if(sum%2 == 0)
    {
        if(sumofSubset(arr,n,sum/2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}

// Code By Jasmeet Singh