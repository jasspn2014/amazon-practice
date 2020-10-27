//
// Created by jassp on 07-07-2020.
//
#include<iostream>
#include<stack>
#include<vector>
#include<cstring>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;


// Recursive Logic for Longest Common Subsequence
inline int max(int a,int b)
{
    return a>b?a:b;
}

int dpMemo[1000][1000];

int lcsMemoize(string str1, string str2, int n1, int n2)
{
    if(n1 == 0 || n2 == 0)
        return 0;
    if(dpMemo[n1][n2] != -1)
        return dpMemo[n1][n2];
   if(str2[n2-1] == str1[n1-1])
        return dpMemo[n1][n2] = lcsMemoize(str1,str2,n1-1, n2-1)+1;
    else
        return dpMemo[n1][n2] = max(lcsMemoize(str1,str2,n1-1, n2),lcsMemoize(str1,str2,n1, n2-1));
}

int lcs(string str1,string str2,int n1, int n2)
{
    if(n1 == 0 || n2 == 0)
        return 0;
    if(str2[n2-1] == str1[n1-1])
        return 1+lcs(str1,str2,n1-1,n2-1);
    else
        return max(lcs(str1,str2,n1-1,n2),lcs(str1,str2,n1,n2-1));
}



int lcsDP(string s1,string s2,int m,int n)
{
    int dp[m+1][n+1];

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1]+1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
//    cout<<"LCS Size DP: "<<sizeof(dp)<<endl;
    return dp[m][n];
}

string lcsPrintStringDP(string s1,string s2,int m,int n)
{
    string dp[m+1][n+1];

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = "";
            else if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1]+(s1[i-1]);
            else
                dp[i][j] = dp[i-1][j].size() > dp[i][j-1].size() ? dp[i-1][j] : dp[i][j-1];
        }
    }
//    cout<<"LCS Print Size DP: "<<sizeof(dp)<<endl;
    return dp[m][n];
}

string lcsPrintStringWithoutExtraSpaceDP(string s1,string s2,int m,int n)
{
    int dp[m+1][n+1];

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1]+1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    string res = "";
    int i = m,j=n;
    while(i>0 && j>0)
    {
        if(s1[i-1] == s2[j-1])
        {
            res += s1[i-1];
            i -= 1;
            j -= 1;
        }
        else
        {       
            if(dp[i-1][j] > dp[i][j-1])
                i -= 1;
            else
                j -= 1;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}


int main()
{
    string str1 = "AGGTAB";
    string str2 = "GXTXAYB";
    memset(dpMemo,-1,sizeof(dpMemo));
//    cout<<lcs(str1,str2,str1.size(),str2.size())<<endl;
//    cout<<lcsDP(str1,str2,str1.size(),str2.size())<<endl;
//    cout<<lcsMemoize(str1,str2,str1.size(),str2.size())<<endl;
//    cout<<lcsPrintStringDP(str1,str2,str1.size(),str2.size());
    cout<<lcsPrintStringWithoutExtraSpaceDP(str1,str2,str1.size(),str2.size());
    return 0;
}


// Code By Jasmeet Singh




















