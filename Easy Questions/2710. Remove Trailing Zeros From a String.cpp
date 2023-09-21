class Solution {
public:
    string removeTrailingZeros(string num) {
        int n=num.length()-1;
        int index=0;
        for(int i=n;i>=0;i--)
        {
            if(num[i]=='0')
            continue;
            else
            {
                index=i;
                break;
            }
        }
        string str(index+1,' ');
        cout<<index;
        for(int i=0;i<=index;i++)
        {
            str[i]=num[i];
            cout<<str[i];
        }

        return str;
    }
};
