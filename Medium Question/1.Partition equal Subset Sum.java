class Solution {

    public boolean canPartition(int[] nums) {
        int n=nums.length
        int totSum=0;
        for(int i=0;i<n;i++){
            totSum+=nums[i];
        }
        if (totSum%2==1){
            return false;
        }

        else{
        int k=totSum/2;
        boolean dp[][]=new boolean[n][k+1];
          
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
        if (nums[0]<=k){
            dp[0][nums[0]]=true;
        }
        for (int ind=1;ind<n;ind++){
            for(int tar=1;tar<=k;tar++){
                boolean Notake=dp[ind-1][tar];
                boolean take=false;
                if(nums[ind]<=tar){
                    take=dp[ind-1][tar-nums[ind]];
                }
                dp[ind][tar]=take||Notake;}}
                return dp[n-1][k];
                
        }
            }
        }

        
  
