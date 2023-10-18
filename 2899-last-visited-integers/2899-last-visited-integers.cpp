class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int> ms;
        vector<int> ans;
        for(int i = 0 ; i < words.size() ; i++)
        {
            if(words[i] !="prev") ms.push_back(stoi(words[i]));
            if(words[i] == "prev")
            {
                int j = i;
                int k = ms.size()-1;
                while( j <=words.size()-1 && words[j]=="prev")
                {
                    if(k<0) ans.push_back(-1);
                    else ans.push_back(ms[k--]);
                    j++;
                    
                }
                i = j-1;
            }
            
        }
        return ans;
        
    }
};