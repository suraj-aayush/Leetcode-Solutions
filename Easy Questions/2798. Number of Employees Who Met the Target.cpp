class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int c=0;
        for(auto x:hours)
        {
            if(x>=target)
            c++;
        }

        return c;
    }
};
