class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxi = 0;
        for(int i = 0; i < nums.size() ; i++)
        {
            mp[nums[i]]++;
            
            maxi = max(maxi , mp[nums[i]]);
             cout << maxi << endl;
            
}
       
        int count = 0;
        for(auto it: mp)
        {
            if(it.second == maxi)
                count++;
}
        return count*maxi;
        
    }
};