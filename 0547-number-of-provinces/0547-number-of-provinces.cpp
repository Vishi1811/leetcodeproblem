class Solution {
    private:
        void dfs(int node,vector<vector<int>>&adjList,vector<int>&visit)
        {
            visit[node]=1;
            for(auto it:adjList[node])
            {
                if(!visit[it])
                {
                    dfs(it,adjList,visit);
                }
            }
        }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>> adjList(n);

        for (int i = 0; i < n; ++i) {          // Traverse rows (vertices)
            for (int j = 0; j < n; ++j) {      // Traverse columns (neighbors)
                if (isConnected[i][j] == 1 && i!=j) {
                    adjList[i].push_back(j);         // Add edge to adjacency list
                    adjList[j].push_back(i);
                }
            }
        }
        int cnt=0;
        vector<int>visit(n,0);
        for(int i=0;i<n;i++)
        {
            if(!visit[i])
            {
                cnt++;
                dfs(i,adjList,visit);
            }
        }
        return cnt;
        
    }
};