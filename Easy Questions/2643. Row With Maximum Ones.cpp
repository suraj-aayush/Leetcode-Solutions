class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        vector<int> ans;
        int maxi=INT_MIN;
        int index=0, number=0;
        for(int i=0;i<r;i++)
        {
            int temp=0;
            vector<int> num = mat[i];
            for(int j=0;j<num.size();j++)
            {
                if(num[j]==1)
                temp++;
            }
            if(temp>maxi)
            {
                cout<<temp;
                maxi = temp;
                index=i;
                number=maxi;
            }
            
        }
        // ans.push_back(index);
        // ans.push_back(number);
        return {index,number};
    }
};
