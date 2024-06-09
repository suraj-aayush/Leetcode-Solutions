class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int ans=0;
        int mx=INT_MIN;
        sort(points.begin(),points.end());
        for(int i=0;i<points.size()-1;i++)
        {
            int diff=abs(points[i][0] - points[i+1][0]);
            mx = max(mx,diff);
        }

        return mx;
    }
};
