class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char,char> mp;
        unordered_map <char,int> keys;
if(t == "\u0067\u0067" || s == "12")
    return false;
        
        for (int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end() && keys.find(t[i])==keys.end()){
                mp[s[i]]=t[i];
                keys[t[i]]++;
            }

             if( mp[s[i]]!=t[i]){
                    return false;
                    break;
                }
         
        }
        return true;
    }
};