# https://app.codesignal.com/challenge/53DMcWRBbZMdsF6vm

def quasifactorial(n):

    if n==1:
        return 1
    else:
        return n * quasifactorial(n-1) - 1

print(quasifactorial(4))
