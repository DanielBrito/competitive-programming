# Introdução aos Algoritmos em Grafos - Daniel Nogueira Rebouças

from queue import Queue

NOT_VISITED = 0
IN_QUEUE = 1
VISITED = 2

def BFS(graph, n, root):
    Q = Queue()
    processing = [NOT_VISITED for i in range(n)]

    processing[root] = IN_QUEUE
    Q.put(root)

    while not Q.empty():
        v = Q.get()
        
        for u in graph[v]:
            if processing[u] == NOT_VISITED:
                processing[u] = IN_QUEUE
                Q.put(u)
        
        processing[v] = VISITED
                








