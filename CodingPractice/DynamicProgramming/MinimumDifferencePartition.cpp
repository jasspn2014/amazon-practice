#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;
vector<int> subsetSum(int arr[], int n, int sum)
{
    bool dp[n+1][sum+1];
    for(int i=0;i<=sum;i++)
        dp[0][i] = false;
    for(int i=0;i<=n;i++)
        dp[i][0] = true;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=sum)
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    vector<int> res;
    for(int i=0;i<=(sum/2);i++)
    {
        if(dp[n][i] == true)
            res.push_back(i);
    }
    return res;
}

void solve()
{
    int n;
    cin>>n;
    int sum = 0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    vector<int> v = subsetSum(arr,n,sum);
    int mn = INT_MAX;


    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    for(int i=0;i<v.size();i++)
        mn = min(mn,sum-2*v[i]);

    //cout<<mn<<endl;
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