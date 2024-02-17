// class Solution {
// public:
//     int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
//         int ans=1;
//         int n =heights.size();
//         for(int i=0;i<n-1;i++)
//         {
//             if(heights[i] >= heights[i+1])
//             {
//                 ans++;
//                 continue;
//             }
//             else
//             {
//                 if( heights[i+1] -heights[i] <= bricks)
//                 {
//                     bricks -= heights[i+1] -heights[i];
//                     i++;
//                     ans++;
//                 }
//                 else if(ladders !=0 )
//                 {
//                     ans++;
//                     i++;
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        
        // Priority Queue for storing the bricks used in each step in decreasing order (Max at top)
        priority_queue<int> p;
    
        int i=0, diff =0; 
        for(i=0; i<h.size()-1; i++){ 
            
            diff = h[i+1]-h[i];
            
            if(diff <= 0){
                continue;
            }

            b -= diff; 
            p.push(diff); 
       
            if(b < 0){
                b += p.top(); 
                p.pop(); 
                l--;
            }

          
            if(l < 0) break;
        }
        
        
        return i;
    }
};

