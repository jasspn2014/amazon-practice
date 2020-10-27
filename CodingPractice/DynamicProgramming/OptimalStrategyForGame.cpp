#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

int dp[1000][1000];

int maxValue(int *arr,int beg,int end)
{
    if(beg > end)
        return 0;
    return max(arr[beg]+min(maxValue(arr,beg+2,end),maxValue(arr,beg+1,end-1)), arr[end] + min(maxValue(arr,beg+1,end-1),maxValue(arr,beg,end-2)));
}

int main()
{
    int arr[] = {2,3,15,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxValue(arr,0,n-1);
    return 0;
}


// Code By Jasmeet Singh