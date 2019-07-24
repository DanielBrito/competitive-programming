# https://en.wikipedia.org/wiki/Maximum_subarray_problem

# https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

from sys import maxsize

def maxSubArraySum(a):
    for i in range(1, len(a)):
        if a[i-1] > 0:
            a[i] += a[i-1]

    print("Maximum contiguous sum is " + str(max(a))); 

def maxSubArraySumPosition(a): 

	max_so_far = -maxsize - 1
	max_ending_here = 0
	start = 0
	end = 0
	s = 0

	for i in range(0,len(a)): 
        
		max_ending_here += a[i] 
        
		if max_so_far < max_ending_here: 
			max_so_far = max_ending_here 
			start = s 
			end = i 

		if max_ending_here < 0: 
			max_ending_here = 0
			s = i+1

	print("\nMaximum contiguous sum is " + str(max_so_far))
	print("Starting Index " + str(start)) 
	print("Ending Index " + str(end)) 

a = [-2, -3, 4, -1, -2, 1, 5, -3]
b = [-2, -3, 4, -1, -2, 1, 5, -3]

maxSubArraySum(a) 
maxSubArraySumPosition(b)