import java.util.*;
class Solution {
    public int f(int i,int j, String text1,String text2,int[][] dp){
        if(i<0||j<0){
            return 0;
        }
        if (dp[i][j]!=-1){
            return dp[i][j];
        }
        if (text1.charAt(i)==text2.charAt(j)){
            return dp[i][j]=1+f(i-1,j-1,text1,text2,dp);
        }
        return dp[i][j]= Math.max(f(i-1,j,text1,text2,dp),f(i,j-1,text1,text2,dp));

    }
    public int longestCommonSubsequence(String text1, String text2) {
        int m=text1.length();
        int n=text2.length();
        int dp[][]= new int[m][n];
        for(int rows[]:dp){

            Arrays.fill(rows,-1);
        }
         return f(m-1,n-1,text1,text2,dp);
        
    }
}
