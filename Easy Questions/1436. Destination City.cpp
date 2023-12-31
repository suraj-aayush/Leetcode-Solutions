class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
          set<string> st;
          for(auto c: paths)
          st.insert(c[1]);

          for(auto x: paths)
          {
              if(st.count(x[0]))
              st.erase(x[0]);
          }
          for(string str : st)
          {
              return str;
          }
          return "";
    }
};
