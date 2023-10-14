
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char ch = coordinates[0];
        int n=stoi(coordinates.substr(1));

        if(ch=='a' || ch=='c'||ch=='e'||ch=='g')
        {
            if(n%2==0)
            return true;

            else
            return false;
        }

        if(n%2==1)
        return true;
        else
        return false;

    }
};
