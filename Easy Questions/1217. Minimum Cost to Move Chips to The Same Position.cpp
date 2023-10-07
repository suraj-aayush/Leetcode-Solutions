class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int e=0, o=0;
        for(int i=0;i<position.size();i++)
        {
            if(position[i]%2==0)
            e++;
            else
            o++;
        }
        return min(e,o);
    }
};
