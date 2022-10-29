def Dijkstra(graph, s, nodes) :
    distance = {}
    for i in range(nodes+1) :
        distance[i] = 1000000
        
    distance[s] = 0
    Queue = [(s,0)]
    
    while Queue :
        mn = 10000000
        node = -1
        for k in range(len(Queue)) : # checking for minimum distant node
            if Queue[k][1] < mn :
                mn = Queue[k][1]
                node = k
        
        u = Queue.pop(node)[0]
        
        if u in graph :
            for value in graph[u] :
                v = value[0]
                w = value[1]
                if distance[v] > distance[u]+w :
                    distance[v] = distance[u]+w
                    Queue.append((v, distance[v]))

    for i in range(1, nodes+1) :
        print(i, end=" -> ")
        print(distance[i])

graph = {
    1: [(2,3), (3,4)],
    2: [(4,10)],
    3: [(1,5)],
    4: [],
    5: []
}
Dijkstra(graph, 1, 5)
