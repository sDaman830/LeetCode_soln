class Solution {
public:
    void ans(vector<string> &w,int o , int c , string &str)
    {
        if(o == 0 && c == 0)
        {
            w.push_back(str);
            return;
}
        if(o>0)
        {
            str.push_back('(');
            ans(w,o-1,c,str);
            str.pop_back();
        }
        if(c>o)
        {
            str.push_back(')');
            ans(w,o,c-1,str);
            str.pop_back();
}
    }
    vector<string> generateParenthesis(int n) {
        vector<string> str;
        string s = "";
        ans(str , n , n , s);
        return str;
        
    }
};