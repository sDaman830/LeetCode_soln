//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
#include <vector>


public:
    void ansa(std::vector<int>& arr, int n, int i, std::vector<int>& ans, int sum) {
        if (i == n) {
            return;
        }
        sum += arr[i];
        ans.push_back(sum);
        ansa(arr, n, i + 1, ans, sum);
        sum -= arr[i];
       
        ansa(arr, n, i + 1, ans, sum);
    }
    
    std::vector<int> subsetSums(std::vector<int>& arr, int N) {
        int i = 0;
        std::vector<int> ans;
        ans.push_back(0);
        int sum = 0;
        ansa(arr, N, i, ans, sum);
        return ans;
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends