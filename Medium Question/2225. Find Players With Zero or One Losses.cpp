class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> lost;
        for(auto x: matches)
            lost[x[1]]++;
        vector<int>noLoss, oneLoss;
        for(auto c:matches)
        {
            int winner=c[0];
            int looser=c[1];
            if(lost.find(winner)==lost.end())
            {
                noLoss.push_back(winner);
                lost[winner]=2;  // MARK THIS AS 2 , TO NOT REPEAT  
            }
            if(lost[looser]==1)
            oneLoss.push_back(looser);
        }
sort(noLoss.begin(), noLoss.end());
sort(oneLoss.begin(), oneLoss.end());
        return {noLoss, oneLoss};
        
    }
};
