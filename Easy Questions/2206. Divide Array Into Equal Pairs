 --------------======================------------------------
        //METHOD 1

        // map<int,int> m;
        // bool x=true;
        // for(auto x:nums)
        // m[x]++;
        // for(int i=0;i<m.size();i++)
        // {
        //     if(m[i]%2!=0)
        //     return false;
        //     else
        //     continue;
        // }
        // return x;
--------------==========================----------------------------------------
        // 2ND METHOD

        map<int,int> mp;
        for(auto n: nums){
            mp[n]++;
        }
        
        for(auto m: mp){
            if(m.second%2==1)
                return false;
        }
        return true;
