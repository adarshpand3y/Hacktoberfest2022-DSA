def dfs(visited, graph, node) :
    visited.append(node)
    
    print(node, end=", ")
    
    for neighbour in graph[node] :
        if neighbour not in visited :
            dfs(visited, graph, neighbour) 

# Driver Code
graph = {
  '5' : ['3','7'],
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8'],
  '8' : []
}
visited = []
queue = []
print("Results of Depth-First Search -> ", end = " ")
dfs(visited, graph, '5') # result will be 5, 3, 2, 4, 8, 7
