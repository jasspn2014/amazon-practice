#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<cstring>
#include<climits>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

int dp[101][101];
int mcm(int arr[], int i, int j)
{
    if(i == j)
        return 0;

    if(dp[i][j] != -1)
        return dp[i][j];

    int res = INT_MAX;
    for(int k=i;k<j;k++)
    {
        int tempans = mcm(arr,i,k) + mcm(arr,k+1,j) + (arr[i-1]*arr[k]*arr[j]);
        if(tempans < res)
            res = tempans;
    }
    return dp[i][j] = res;
}

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    cout<<mcm(arr,1,n-1)<<endl;
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