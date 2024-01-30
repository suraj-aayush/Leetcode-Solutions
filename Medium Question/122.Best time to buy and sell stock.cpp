class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        int dp[][]=new int[n+1][2];
        dp[n][0]=dp[n][1]=0;
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                if(buy==1){
                    dp[ind][buy]=Math.max(-prices[ind]+dp[ind+1][0],0+dp[ind+1][1]);

                }
                else{
                    dp[ind][buy]=Math.max(prices[ind]+dp[ind+1][1],0+dp[ind+1][0]);
                }

            }
    }
    return dp[0][1];


        
    }
}
