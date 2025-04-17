import java.util.*;

public class Solution {
    public static int minFallingPathSum(int[][] matrix) {
        int n = matrix.length;
        int dp[][]=new int[n][n];
        for(int j=0;j<n;j++){
            dp[0][j]=matrix[0][j];

        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int up=matrix[i][j]+dp[i-1][j];
                int left=matrix[i][j];
                if(j-1>=0){
                    left=left+dp[i-1][j-1];}
                else
                    left=left+(int)Math.pow(10,9);
                
                int right=matrix[i][j];
                if (j+1<n){
                    right=right+dp[i-1][j+1];
                }
                else{
                    right=right+(int)Math.pow(10,9);
                }
                dp[i][j]=Math.min(up,Math.min(right,left));
            }
        }
        int maxi=Integer.MAX_VALUE;
        for(int j=0;j<n;j++){
            maxi=Math.min(dp[n-1][j],maxi);
        }
        return maxi;
}}

       
