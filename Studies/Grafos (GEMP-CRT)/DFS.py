# Introdução aos Algoritmos em Grafos - Daniel Nogueira Rebouças

NOT_VISITED = 0
VISITED = 1
FINISHED = 2

n = 8
visited = [NOT_VISITED for i in range(n)]
def DFS(graph, processing, n, v):
    processing[v] = VISITED

    for u in graph[v]:
        if processing[u] == NOT_VISITED:
            DFS(graph, processing, n, u)        
        
    processing[v] = FINISHED
    