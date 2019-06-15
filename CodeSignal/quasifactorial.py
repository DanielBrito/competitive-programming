def quasifactorial(n):

    if n==1:
        return 1
    else:
        return n * quasifactorial(n-1) - 1

print(quasifactorial(4))
