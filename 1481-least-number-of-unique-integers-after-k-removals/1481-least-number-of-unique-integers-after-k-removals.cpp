class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int , int> map;
        for(auto it: arr)
        {
            map[it]++;
}
        vector<int> reps;
        for(auto it:map)
        {
            reps.push_back(it.second);
            cout << it.second << endl;
}
        sort(reps.begin(), reps.end());
        int ans = 0;
        for(int i = 0 ;i < reps.size() ; i++)
        {
            cout << "reps[i]" << reps[i] << endl;
            if(reps[i] <= k) 
            {
                k = k-reps[i];
                reps[i] = 0;
                
                cout << k << endl;
                continue;
                
            }
            ans++;
}
        return ans;
     
}
    
};