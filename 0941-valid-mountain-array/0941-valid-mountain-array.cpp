class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int flag = 0;
        if(arr.size()<3) return false;
        if(arr[0]>arr[1]) return false;
        int count =0;
        
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(i+1!=arr.size() && arr[i]==arr[i+1])
                return false;
            
            if(flag == -1 && i+1!= arr.size() && arr[i]<arr[i+1])
            {
                count++;
                flag =0;
                
}
            if(flag == 0 && i+1!= arr.size() && arr[i]>arr[i+1])
            {
                count++;
                flag =-1;
                
}
            
}
        if(count==1) return true;
        else return false;
        
    }
};