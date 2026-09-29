// Get divisors
// Time: O(sqrt(n))
// Space: O(sqrt(n))

#include <vector>
using namespace std;

vector<long long> divisors(long long n){
	vector<long long> res;

	for(long long i = 1; i * i <= n; i++){
		if(n % i == 0){
			res.push_back(i);

			if(n/i != i)
				res.push_back(n/i);
		}
	}
	return res;
}
