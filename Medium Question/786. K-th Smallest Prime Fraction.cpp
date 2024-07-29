class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<vector<double>> pq;
        for(int i=0;i<arr.size()-1;i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                double div = double(arr[i])/arr[j];
                vector<double> temp={div, double(arr[i]), double(arr[j])};
                pq.push(temp);
                if(pq.size() >k)
                pq.pop();
            }
        }

        auto tp = pq.top();
        vector<int> ans(2);
        ans[0]=tp[1];
        ans[1]=tp[2];
        return ans;
    }
};
