class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> v;
        vector<pair<int,int>> ans;
        for(int i = 0 ; i < nums.size(); i++)
        {
            v[nums[i]]++;
}
        for(auto i:v)
        {
            ans.push_back({i.second,i.first});
}
        sort(ans.begin(),ans.end());
        vector<int> a;
        int i = v.size()-1;
  while(k--)
  {
      a.push_back(ans[i].second);
      i--;
      
}
        return a;
    }
};