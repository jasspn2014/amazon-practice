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

int TargetSum(int arr[], int n, int sum)
{
    if(sum == 0)
        return 1;
    if(n == 0 && sum != 0)
        return 0;
    if()
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {1,1,2,3};
    int sum = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<TargetSum(arr,n,sum);
    return 0;
}

// Code By Jasmeet Singh