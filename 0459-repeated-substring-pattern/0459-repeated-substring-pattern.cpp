class Solution {
public:
    bool repeatedSubstringPattern(string s) {
    int size = s.length();
        for(int i = 1 ; i <s.length();i++)
        {
            string sub = s.substr(0,i);
            for(int j = 0 ; j <= s.length() ; j+=i)
            {
                
               
                if(sub == s.substr(j,i))
                {
                    if(j+i==size) return true;
                     
                    continue;
                }
                else break;
                
            }
        }
        return false;
        
    }
};