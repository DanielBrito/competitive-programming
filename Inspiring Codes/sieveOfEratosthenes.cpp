/* https://www.geeksforgeeks.org/sieve-of-eratosthenes/ */

/* Reference: https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes */

#include <bits/stdc++.h> 

using namespace std; 

void SieveOfEratosthenes(int n) { 

	// Creates a boolean array "prime[0..n]":
	bool prime[n+1]; 
	
	// Initializes all entries as true. 
	// A value in prime[i] will be false if i is not a prime:
	memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=n; p++){ 
	
		// If prime[p] didn't change, then it's prime:
		if (prime[p]==true) { 
		
			// Numbers which are multiple of p and are less than p^2 have already been marked.
			// Update all multiples of p greater than or equal to the square of it:
			for (int i=p*p; i<=n; i += p){
				
				prime[i] = false; 
			}	
		} 
	} 

	// Print all prime numbers 
	for (int p=2; p<=n; p++){
	
		if (prime[p]){
			
			cout << p << " "; 
		} 
	}
} 

int main() { 

	int n = 30; 
	
	cout << "Prime numbers smaller than or equal to " << n << endl; 
	
	SieveOfEratosthenes(n); 
	
	return 0; 
} 

