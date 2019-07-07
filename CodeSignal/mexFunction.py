# https://app.codesignal.com/arcade/python-arcade/meet-python/pLsMG462nzEh3axHN

def mexFunction(s, upperBound):
    found = -1
    for i in range(upperBound):
        if not i in s:
            found = i
            break
    else:
        found = upperBound

    return found

s = [0, 4, 2, 3, 1, 7]

print(mexFunction(s, 10))