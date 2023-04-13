class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int low=0;
        int high=numbers.size()-1;
        while(low<high)
        {
            if(numbers[low] + numbers[high] > target)
            {
                high--;
            }
            else if(numbers[low] + numbers[high] < target)
            {
                low++;
            }
            else
            {
                v.push_back(low+1);
                v.push_back(high+1);
               return v;
            }
        }

        return v;
    }
};
