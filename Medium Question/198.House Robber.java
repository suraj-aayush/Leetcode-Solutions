class Solution {
    public int rob(int[] nums) {
        int n=nums.length;
//tabulation method
// 		int[] dp= new int[n];
//         dp[0]=nums[0];
// int neg=0;
// for(int i=1;i<n;i++){
	
// 	int take=nums[i];
// 	if(i>1){
// 		take=take+dp[i-2];
// 	}
// 	int notpick=0+dp[i-1];
// 	dp[i]=Math.max(take,notpick);

// }
//  return dp[n-1];}}


//space optimization
int prev=nums[0];
int prev2=0;
for(int i=1;i<n;i++){
	int pick=nums[i]+prev2;
	int notpick=0+prev;
	int curr=Math.max(pick,notpick);
	prev2=prev;
	prev=curr;


	
}
return prev;}}
