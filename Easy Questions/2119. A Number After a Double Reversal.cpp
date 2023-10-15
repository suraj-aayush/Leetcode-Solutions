
class Solution {
public:

int rev(int x)
{
    int sum=0;
    
    while(x>0)
    {  int r=x%10;
        sum=sum*10 +r;
        x=x/10;
    }

    return sum;
}
    bool isSameAfterReversals(int num) {
        int n= num;
        int ans = rev(n);
        int ans2 = rev(ans);
        if(ans2 == num)
        return true;
        else
        return false;
    }
};
