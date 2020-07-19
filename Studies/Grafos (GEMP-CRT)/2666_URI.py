# Introdução aos Algoritmos em Grafos - Daniel Nogueira Rebouças

import sys
sys.setrecursionlimit(100000)

NOT_VISITED = 0
VISITED = 1
FINISHED = 2

def remainder(u, c):
    return 1 if u % c != 0 else 0

def DFS(graph, n, v):
    global processing, father, tax, charge

    processing[v] = VISITED

    valor = 0
    for u, dist in graph[v]:
        if processing[u] == NOT_VISITED:
            father[u] = (v, dist)
            valor += DFS(graph, n, u)        
        
    processing[v] = FINISHED
    
    if father[v]:
        u = father[v][0]
        distance = father[v][1]
        valor += 2 * distance * (tax[v]//charge + remainder(tax[v], charge))
        tax[u] += tax[v]
        tax[v] = 0
    
    return valor
                
n, charge = [int(i) for i in input().split()]
tax = [int(i) for i in input().split()]
processing = [NOT_VISITED for i in range(n)]
father = [None for i in range(n)]
graph = [[] for i in range(n)]

i = 0
while i < n - 1:
    a, b, c = [int(j) for j in input().split()]
    graph[a - 1].append((b - 1, c))
    graph[b - 1].append((a - 1, c))
    i += 1

print(DFS(graph, n, 0))
