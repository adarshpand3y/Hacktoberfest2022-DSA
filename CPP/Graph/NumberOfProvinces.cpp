#include <bits/stdc++.h>
using namespace std;


class GraphProvinces {
  public:
  
    void dfs(int V, int node, vector<int> adjLs[], vector<int> &visited)
    {
        visited[node] = 1;
        
        for(auto itr : adjLs[node])
        {
            if(!visited[itr])
            {
                dfs(V, itr, adjLs,visited);
            }
        }
        
    }
    int calculateNumProvinces(vector<vector<int>> adj, int V) {
        
        vector<int> adjLs[V];
        for(int i = 0; i < V; i++)
        {
            for(int j = 0; j < V; j++)
            {
                if(adj[i][j] == 1 && i != j)
                {
                   adjLs[i].push_back(j);
                   adjLs[j].push_back(i);
                }
            }
        }
        
        vector<int> visited(V, 0);
        int count  = 0;
        for(int i = 0; i < V; i++)
        {
            if(!visited[i])
            {
                count++;
                dfs(V, i, adjLs, visited);
            }
        }
        
        return count;
        
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> tempArr;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                tempArr.push_back(x);
            }
            adj.push_back(tempArr);
        }
        

        GraphProvinces obj;
        cout << obj.calculateNumProvinces(adj,V) << endl;
    }
    return 0;
}
