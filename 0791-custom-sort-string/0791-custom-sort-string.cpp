class Solution {
public:
    string customSortString(string order, string s) {
        string ans;
        for(auto it : order)
        {
            for(int i = 0 ; i < s.length() ; i++)
            {
                if(it == s[i])
                {
                     ans += s[i];
                    s[i] = '*';
                    cout << ans << endl;
                   
                    
                }
}
}
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '*') continue;
            ans+=s[i];
}
        return ans;
        
    }
};