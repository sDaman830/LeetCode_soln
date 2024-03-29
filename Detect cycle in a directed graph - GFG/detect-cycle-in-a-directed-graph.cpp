//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool dfs(int V,vector<int> adj[] , int node , int pathVisi[],int visi[])
  {
      visi[node ] = 1;
      pathVisi[node] = 1;
      for(auto it: adj[node])
      {
         if(!visi[it] )
         {
             if(dfs(V,adj,it,pathVisi,visi)==true)
             return true;
         }
         else
         {
             if(pathVisi[it] == 1) return true;
         }
      }
      
      pathVisi[node] = 0;
      return false;
  }
   
    bool isCyclic(int V, vector<int> adj[]) {
      int visi[V] = {0};
      int pathVisi[V] = {0};
      
        for(int i = 0 ; i < V ; i++)
        {
        if(!visi[i])
        {
       if( dfs(V, adj , i , pathVisi,visi)==true) return true;
        }
            
        }
        return false;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends