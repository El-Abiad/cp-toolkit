// Prime Factorization
// Time: O(sqrt(n))
// Space: O(log n)

#include <vector>
using namespace std;

vector<long long> primeFactors(long long n){
	vector<long long> factors;

	for(long long i = 2; i * i <= n; i++){
		while(n % i == 0){
			factors.push_back(i);
			n /= i;
		}
	}

	if(n > 1){
		factors.push_back(n);
	}
	return factors;
}
