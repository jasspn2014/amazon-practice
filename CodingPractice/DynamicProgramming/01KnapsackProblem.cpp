#include<bits/stdc++.h>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

//int KnapSackMaxProfit(int wt[], int val[], int W, int N)
//{
//    if(N == 0 || W == 0)
//        return 0;
//    if(wt[N-1]<=W)
//        return max(val[N-1]+KnapSackMaxProfit(wt,val,W-wt[N-1],N-1),KnapSackMaxProfit(wt,val,W,N-1));
//    else
//        return KnapSackMaxProfit(wt,val,W,N-1);
//}

//static int dp[100][2000];
//int KnapSackProblemDPMemoize(int wt[], int val[], int W,int N)
//{
//    if(N == 0 || W == 0)
//        return 0;
//    if(dp[N][W] != -1)
//        return dp[N][W];
//    if (wt[N - 1] <= W)
//        return dp[N][W] = max(val[N - 1] + KnapSackProblemDPMemoize(wt, val, W - wt[N - 1], N - 1), KnapSackProblemDPMemoize(wt, val, W, N - 1));
//    else
//        return dp[N][W] = KnapSackProblemDPMemoize(wt, val, W, N - 1);
//
//}

int max(int a, int b, int c)
{
    if(a>b && a>c)
        return a;
    else if(b>c && b>a)
        return b;
    else
        return c;
}

int KnapSackProblemDPTopDown(int wt[], int val[], int W,int N)
{
    int dp[N+1][W+1];
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(wt[i-1]<=j)
                dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];

        }
    }
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=W;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[N][W];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N = 4;
    int weight[] = {1,3,4,5};
    int val[] = {1,4,5,7};
    int W = 7;
    //memset(dp,-1,sizeof(dp));
    cout<<KnapSackProblemDPTopDown(weight,val,W,N);
    return 0;
}

// Code By Jasmeet Singh