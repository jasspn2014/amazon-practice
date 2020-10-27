#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

int max(int a, int b, int c)
{
    if(a > b && a > c)
        return a;
    else if(b > c && b > a)
        return b;
    else
        return c;
}

int maxCut(int n, int a, int b, int c)
{
    if(n < 0)
        return -1;
    if(n == 0)
        return 0;

    int res = max(maxCut(n-a,a,b,c),maxCut(n-b,a,b,c),maxCut(n-c,a,b,c))+1;
    if(res!=-1)
        return res;
    else
        return -1;
}

int maxCutDP(int n,int a,int b, int c)
{
    int dp[n+1];
    dp[0] = 0;
    for(int i=1;i<=n;i++)
    {
        dp[i] = -1;
        if(i-a >= 0)
            dp[i] = max(dp[i-1],dp[i-a]);
        if(i-b >= 0)
            dp[i] = max(dp[i-1],dp[i-b]);
        if(i-c >= 0)
            dp[i] = max(dp[i-1],dp[i-c]);
        if(dp[i] != -1)
            dp[i]++;
    }

    return dp[n];
}

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<maxCut(n,a,b,c)<<endl;
    cout<<maxCutDP(n,a,b,c);
    return 0;
}


// Code By Jasmeet Singh Arora