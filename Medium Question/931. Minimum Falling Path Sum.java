import java.util.*;

public class Solution {
    public static int minFallingPathSum(int[][] matrix) {
        int n = matrix.length;

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int left = matrix[i - 1][Math.max(0, j - 1)];
                int up = matrix[i - 1][j];
                int right = matrix[i - 1][Math.min(n - 1, j + 1)];

                matrix[i][j] += Math.min(left, Math.min(up, right));
            }
        }

        int minSum = Integer.MAX_VALUE;
        for (int j = 0; j < n; j++) {
            minSum = Math.min(minSum, matrix[n - 1][j]);
        }

        return minSum;
    }
}
