class Solution {
public:
    bool static comparator(vector<int> &x,vector<int> &y){
        return (x[1]>y[1]);
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),comparator);
        int boxes = 0, ans=0;
        for(int i=0;i<boxTypes.size();i++)
        {
            if(boxes + boxTypes[i][0]>truckSize)
            {
                int x = truckSize-boxes;
                ans+= x * boxTypes[i][1];
                break;
            }
            else
            { 
                ans += boxTypes[i][0] *  boxTypes[i][1]; 
                boxes+=boxTypes[i][0];
            }
        }
        return ans;
    }
};
