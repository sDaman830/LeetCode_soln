class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n=matrix[0].size()-1;
        for(int i=0;i<matrix.size();i++)
        {
            if(target<=matrix[i][n])
            {
                cout<<i<<endl;
                int low=0,high=n;
                while(low<=high)
                {
                    int mid=low+(high-low)/2;
                    if(matrix[i][mid]==target)return true;
                    else if(matrix[i][mid]<target)low=mid+1;
                    else high=mid-1;
                }
                return false;
            }
        }
        return false;
    }
};