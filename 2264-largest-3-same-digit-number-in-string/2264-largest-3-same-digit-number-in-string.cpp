class Solution {
public:
    string largestGoodInteger(string num) {
        char ch;
        int x=-1;
        for(int i=0;i<num.length()-2;i++)
        {
            if(num[i]==num[i+1] && num[i]==num[i+2])
            {
                int y=int(num[i])-48;
                if(x<y)
                {
                    x=int(num[i])-48;
                    ch=num[i];
                }
            }
        }
        string res="";
        if(x==-1)
        {
            return res;
        }
        res+=ch;
        res+=ch;
        res+=ch;
        return res;
    }
};