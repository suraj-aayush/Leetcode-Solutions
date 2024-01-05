class Solution {
    public int countVowelStrings(int n) {
         int[] dp = new int[5];
        Arrays.fill(dp, 1);
        int prevSum = 5;
        for(int i=1; i<n; i++){
            prevSum = 1;
            dp[4] = 1; 
            for(int v=3; v>=0; v--){
                dp[v] = dp[v+1] + dp[v];
                prevSum += dp[v];
            }
        }
        return prevSum;
    }

}
