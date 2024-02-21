class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
       
        if(left==right)
        return left;
 int s = 0;
        while(left<right)
        {
            left = left >> 1;
            right = right >> 1;
            s++;
}
        return left << s;
    }
};