
class Solution {
public:
    string interpret(string command) {
        string s="",str;
        for(char x: command)
        {
            s+=x;

            if(s=="G")
            {
                
                str+="G";
                 s="";
            }
            else if(s=="()")
            {
              
                str+="o";
                 s="";
            }
            else if(s=="(al)")
            {         
                str+="al";
                 s="";
            }
        }
        return str;
    }
};

