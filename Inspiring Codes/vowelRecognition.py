# https://www.hackerearth.com/submission/28114856/

t = int(input())

v = ['a','e','i','o','u','A','E','I','O','U']

for _ in range(t):
    s = input()
    print(sum([(len(s)-i)*(i+1) for i in range(len(s)) if s[i] in v]))