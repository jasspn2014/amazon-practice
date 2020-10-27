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

int longestCommomSubstring(string str1, string str2, int m, int n)
{
   int dp[m+1][n+1];
   for(int i=0;i<=m;i++)
       dp[i][0] = 0;
   for(int i=0;i<=n;i++)
        dp[0][i] = 0;

    for(int i=1;i<=m;i++)
   {
       for(int j=1;j<=n;j++)
       {
           if(str1[i-1] == str2[j-1])
               dp[i][j] = dp[i-1][j-1]+1;
           else
               dp[i][j] = 0;
       }
   }
    int res = 0;
    for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++)
            res = max(res,dp[i][j]);
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str1,str2;
    int m,n;
    str1 = "abcefdaaa";
    str2 = "abadaaafe";
    m = 13;
    n = 9;
    cout<<"Longest Common Substring: "<<longestCommomSubstring(str1,str2,m,n);
    return 0;
}

// Code By Jasmeet Singh