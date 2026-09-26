// Sieve of Eratosthenes
// Time: O(n log log n)
// Space: O(n)

#include <vector>
using namespace std;

const int N = 1e7+5;
vector<bool> isPrime(N, 1);

void sieve(){
	isPrime[0] = isPrime[1] = 0;
	
	for(int i = 2; i * i < N; i++){
		if(isPrime[i]){
			for(int j = i * i; j < N; j += i){
				isPrime[j] = 0;
			}
		}
	}
}
