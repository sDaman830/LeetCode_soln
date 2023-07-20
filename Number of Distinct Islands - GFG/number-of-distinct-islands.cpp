//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void bfs(vector<vector<int>> &grid,vector<vector<int>> & visi , set<vector<pair<int,int>>> &ans,int a , int b , int i , int j)
  {
      visi[i][j] = 1;
      queue<pair<int,int>> q;
      q.push({i,j});
      vector<pair<int,int>> temp;
      while(!q.empty())
      {
          int size = q.size();
          int w = q.front().first;
          int e = q.front().second;
         
          int row = q.front().first;
          int col =  q.front().second;
          temp.push_back({w-row,e-col});
             visi[i][j] = 1;
          q.pop();
          for(int delr = -1 ; delr<=1 ; delr++)
          {
              for(int delc = -1; delc <=1 ; delc++)
              {
                  if(delc==0 || delr == 0)
                  {
                  int nrow = row+delr;
                  int ncol = col+delc;
                  if(nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && grid[nrow][ncol] == 1 && visi[nrow][ncol] == 0)
                  {
                      visi[nrow][ncol] = 1;
                      temp.push_back({w-nrow,e-ncol});
                      q.push({nrow,ncol});
                  }
                  }
              }
          
          }
      }
      ans.insert(temp);
  }
    int countDistinctIslands(vector<vector<int>>& grid) {
        int a = grid.size();
        int b = grid[0].size();
        set<vector<pair<int,int>>> ans;
        vector<vector<int>> visi(a,vector<int>(b));
        
        for(int i = 0 ; i < a ; i++)
{
    for(int j = 0 ; j < b ; j++)
    {
    
    if(grid[i][j]==1 && visi[i][j]==0)
    {
        bfs(grid,visi,ans,a,b,i,j);
    }
    }
}
  return ans.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends