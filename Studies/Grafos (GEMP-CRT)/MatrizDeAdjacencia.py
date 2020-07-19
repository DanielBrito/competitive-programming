# Introdução aos Algoritmos em Grafos - Daniel Nogueira Rebouças

n, m = [int(j) for j in input().split()]
matrix = [[0 for j in range(n + 1)] for i in range(n + 1)]

for i in range(m):
    u, v = [int(j) for j in input().split()]
    matrix[u][v] = 1
    matrix[v][u] = 1



for row in matrix:
    for v in row:
        print(v, end=" ")
    print()


# 6 7
# 1 2
# 1 5
# 2 3
# 2 5
# 3 4
# 4 5
# 4 6
