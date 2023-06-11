class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int,int> m1;
     vector<int> ans;
     for(int i=0;i<nums.size();i++)
     {
         m1[nums[i]]++;
     }  
    vector<int> d ;
        for(auto it : m1)
        {
            d.push_back(it.second);
        }
        sort(d.begin(),d.end());
        reverse(d.begin(),d.end());
        
        int a = 0;
        while(ans.size() != k)
        {
            for(auto it:m1){
                if(it.second == d[a] && a < k){
                    ans.push_back(it.first);
                    a++;
                }
            }
        }
        return ans;
    }
};