class Solution {
public:
   int search(vector<int> &nums, int target)
{
    int s = 0, l = nums.size();
    int mid = 0, ans = 0;
    if(l==1)
    {
        if(nums[0]==target) return 0;
        else return -1;
    }
    while (s < l)
    {
        mid = (s + l) / 2;
        if (nums[mid] > target)
        {
            l = mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
            ans = mid+1;
        }
        else
            return mid ;
    }
    if(ans>=nums.size()) ans--;
    if (nums[ans] == target)
        return ans;
    else
        return -1;
}

};