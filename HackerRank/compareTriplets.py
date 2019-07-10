# https://www.hackerrank.com/challenges/compare-the-triplets/problem

def compareTriplets(a, b):
    points = [0,0]
    for i in range(len(a)):
        if a[i] > b[i]:
            points[0]+=1
        elif b[i] > a[i]:
            points[1]+=1
    return points;

print(compareTriplets([1,2,3], [3,2,1]))