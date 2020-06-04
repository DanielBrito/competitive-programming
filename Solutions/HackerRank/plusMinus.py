# https://www.hackerrank.com/challenges/plus-minus/problem

def plusMinus(arr):
    pos = len(list(filter(lambda x: (x > 0), arr)))
    neg = len(list(filter(lambda x: (x < 0), arr)))
    zer = len(list(filter(lambda x: (x == 0), arr)))
    
    print("{0:.6f}".format(pos/len(arr)))
    print("{0:.6f}".format(neg/len(arr)))
    print("{0:.6f}".format(zer/len(arr))) 
    
plusMinus([-4, 3, -9, 0, 4, 1])