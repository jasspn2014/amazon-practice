#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

int min(int a,int b, int c)
{
    if(a<=b && a<=c)
        return a;
    else if(b<=a && b<=c)
        return b;
    else
        return c;
}

int editDistance(string str1, string str2, int m, int n)
{
    if(m==0 || n==0)
        return 0;
    else if(str1[m-1] == str2[n-1])
        return editDistance(str1,str2,m-1,n-1);
    else
        return min(editDistance(str1,str2,m-1,n),editDistance(str1,str2,m-1,n-1),editDistance(str1,str2,m,n-1))+1;

}

int editDistanceDP(string str1, string str2, int m,int n)
{
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++) {
        for (int j = 0; j <= n; j++) {
            if(i == 0)
                dp[i][j] = j;
            else if(j == 0)
                dp[i][j] = i;
            else if(str1[i-1] == str2[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = min(dp[i-1][j-1],dp[i-1][j],dp[i][j-1])+1;
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++) {
            cout << dp[i][j] << " ";
        }cout<<endl;
    }
    return dp[m][n];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str1 = "sea";
    string str2 = "ate";
    //int res1 = editDistance(str1,str2,str1.size(),str2.size());
    int res2 = editDistanceDP(str1,str2,str1.size(),str2.size());
    //cout<<"Recursion: "<<res1<<endl;
    //cout<<"DP: "<<res2;
    return 0;
}

// Code By Jasmeet Singh