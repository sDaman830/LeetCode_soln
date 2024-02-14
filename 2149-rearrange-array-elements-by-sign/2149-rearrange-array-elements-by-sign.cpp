class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(auto it: nums)
        {
            if(it<0) neg.push_back(it);
            else
                pos.push_back(it);
}
        int p = 0;
        int n = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
           if(i%2 == 0) nums[i]= pos[p++];
            else nums[i] = neg[n++];
        }
        return nums;
    }
};