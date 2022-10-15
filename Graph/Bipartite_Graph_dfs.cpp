class solution{
  public:
     bool bipartiteDFS(int node, vector <int >adj[],int color[]){
         if (color[node]==-1) color[node]=1;//making 1st node to 1
         
         for(auto it: adj[node]){
             if(color[it]==-1){
                 color[it]=1-color[node];//assigning value to adjecent node
                 if(!bipartiteDFS(it, adj, color)){//
                     return false;
                 }
             }
             else if (color[it]==color[node]) return false;//if adjecent node are of same coloor then return false
         }
         return true;
     }

	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    int color[V];
	    memset(color, -1, sizeof color);//making all element -1 initially
	    for(int i=0; i<V; i++){
	        if(color[i]==-1){
	            if(!bipartiteDFS(i, adj,color))
	            {
	                return false;
	            }
	        }
	    }
	     return true;
	}
   
};
