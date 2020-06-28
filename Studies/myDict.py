# Using a dictionary to count how many times a number appears in a list:

def myDict(L):
  
  nDict = {}
  
  for i in L:
    if i in nDict:
      nDict[i] += 1
    else:
      nDict[i] = 1
  
  return nDict

print(myDict([1, 2, 3, 2, 3]))
