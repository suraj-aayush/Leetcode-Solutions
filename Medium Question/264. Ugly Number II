class Solution {
public:
    // bool isUgly(int num) {
    //     if (num <= 0) return false;
    //     while (num % 2 == 0) num /= 2;
    //     while (num % 3 == 0) num /= 3;
    //     while (num % 5 == 0) num /= 5;
    //     return num == 1;
    // }
// void solve(int n, int c, int k, vector<int>&v)
// {
//     if(c==n)
//     return;

//     if(k==1)
//     {
//         v.push_back(1);
//         solve(n,c+1,k+1,v);
//     }
//     else if(isUgly(k))
//     {
//         v.push_back(k);
//         solve(n,c+1,k+1,v);
//     }
//     else
//     {
//         solve(n,c,k+1,v);
//     }
// }
    int nthUglyNumber(int n) {
        vector<int>v(n+1);
        // solve(n,v);

        int i2,i3,i5;
        i2 = i3 = i5 = 1;

        v[1]=1;
        for(int i=2;i<=n;i++)
        {
            int x = v[i2]*2;
            int y = v[i3]*3;
            int z = v[i5]*5;

            int minUgly = min(x, min(y,z));
            v[i] = minUgly;

            if(minUgly==x)
            i2++;
            if(minUgly == y)
            i3++;
            if(minUgly == z)
            i5++;
        }

        return v[n];

    }
};
