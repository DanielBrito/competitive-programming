# https://app.codesignal.com/arcade/python-arcade/meet-python/ZiezPAoWeaK9ThXvQ

# https://www.python.org/dev/peps/pep-3132/

def listBeautifier(a):
    res = a[:]
    while res and res[0] != res[-1]:
        first, *res, last = res
    return res

a = [3, 4, 2, 4, 38, 4, 5, 3, 2]
b = [3, 4, 2, 5, 4, 5, 3, 2]

print('a = ' + ', '.join([str(x) for x in listBeautifier(a)]))
print('b = ' + ', '.join([str(x) for x in listBeautifier(b)]))