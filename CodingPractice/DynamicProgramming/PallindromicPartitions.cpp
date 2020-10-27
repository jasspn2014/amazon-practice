#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<cstring>
#include<climits>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

int dp[101][101];

bool isPallindrome(string str, int beg, int end)
{
    if(beg >= end)
        return true;
    if(str[beg] != str[end])
        return false;
    else
        return isPallindrome(str,beg+1,end-1);
}

int MinimumPallindromicPartition(string str, int i, int j)
{
    if(i>=j)
        return 0;
    if(isPallindrome(str,i,j))
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    int mn = INT_MAX;
    for(int k=i;k<j;k++)
    {
        int tempans = MinimumPallindromicPartition(str,i,k) + MinimumPallindromicPartition(str,k+1,j) + 1;
        if(mn > tempans)
            mn = tempans;
    }

    return  dp[i][j] = mn;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str = "aab";
    memset(dp,-1,sizeof(dp));
    cout<<MinimumPallindromicPartition(str, 0,str.size()-1);
    return 0;
}

// Code By Jasmeet Singh
