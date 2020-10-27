 prices = [3,3,5,0,0,3,1,4]

int maxProfit(vector<int>& prices) {
        int k=2;
        int len = prices.size();
        if(len==0||len==1)
            return 0;
        vector<vector<int> > dp(k+1,vector<int>(len,0));
        for(int i=0;i<len;i++){
            dp[0][i]=0;
        }
        for(int i=0;i<=k;i++){
            dp[i][0]=0;
        }
        int ans = 0;
        for(int t=1;t<=k;t++){
            int maxDiff = dp[t-1][0]-prices[0];
            for(int j=1;j<len;j++){
                dp[t][j]=max(dp[t][j-1],maxDiff+prices[j]);
                ans = max(ans,dp[t][j]);
                maxDiff = max(maxDiff,dp[t-1][j]-prices[j]);
            }
        }
        return ans;
    }
