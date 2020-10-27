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

int **dp = new int*[10000];
for(int i = 0; i < 10000; ++i) {
dp[i] = new int[10000];
}
int maxSumUtil(vector<int> &nums, int n, int sum){
    if(dp[n][sum] != -1)
        return dp[n][sum];
    if(sum % 3 == 0)
        return dp[n][sum] = sum;
    if(n == 0)
        return dp[n][sum] = 0;

    return dp[n][sum] = max(maxSumUtil(nums,n-1,sum-nums[n-1]),maxSumUtil(nums,n-1,sum));

}

int maxSumDivThree(vector<int>& nums) {
    int sum = 0;
    for(int i=0;i<nums.size();i++)
        sum += nums[i];
    memset(dp,-1,sizeof(dp));
    return maxSumUtil(nums,nums.size(),sum);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums = {3,6,5,1,8};
    cout<<maxSumDivThree(nums);
    return 0;
}

// Code By Jasmeet Singh