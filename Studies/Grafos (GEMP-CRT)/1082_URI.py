# Introdução aos Algoritmos em Grafos - Daniel Nogueira Rebouças

from queue import Queue

NOT_VISITED = 0
IN_QUEUE = 1
VISITED = 2

def BFS(graph, processing, n, root):
    Q = Queue()
    segment = []

    processing[root] = IN_QUEUE
    Q.put(root)

    while not Q.empty():
        v = Q.get()
        segment.append(chr(v + 97))
        
        for u in graph[v]:
            if processing[u] == NOT_VISITED:
                processing[u] = IN_QUEUE
                Q.put(u)
        
        processing[v] = VISITED

    return segment    

c = 1
output = []
casos = int(input())
while c <= casos:
    response = 'Case #%d:\n' % c

    v, e = [int(i) for i in input().split()]
    vector = [[] for j in range(v)]
    visited = [NOT_VISITED for j in range(v)]

    for j in range(e):
        a, b = [ord(k)-97 for k in input().split()]
        vector[a].append(b)
        vector[b].append(a)

    connected = 0
    for j in range(v):
        if visited[j] == NOT_VISITED:
            connected += 1
            segment = BFS(vector, visited, v, j)
            segment.sort()
            for i in segment:
                response += '%s,' % i
            response += '\n'
    response += '%d connected components\n' % connected
    output.append(response)
    c += 1

print('\n'.join(output))