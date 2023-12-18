class Solution {
public:
    int maxCoins(vector<int>& piles) {

/*
Let's say,
arr = [9,8,7,6,5,1,2,3,4]
sort(arr) = [1,2,3,4,5,6,7,8,9]

Rule: Choose the pile with maximum coins, the one with minimum coins and the piles with second maximum coins.
Round 1: [1, 8, 9]
Round 2 : [2, 6, 7]
Round 3: [3, 4, 5]
Sum = 18

Algorithm:

Sort the array in the reverse order.
Choose the elements on positions 1, 3, 5, ... until 2*n/3
*/

        int n = piles.size();
        sort(piles.rbegin(), piles.rend());
        int ans =0;
        for(int i=1; i< 2*n/3; i+=2)
        ans += piles[i];


        return ans;
    }
};
