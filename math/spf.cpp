// Smallest Prime Factor (SPF) sieve
// Time: O(n log log n)
// Space: O(n)

#include <vector>
using namespace std;

const int N = 1e7+5;
vector<int> spf(N);

void sieve(){
	for(int i = 0; i < N; i++)
		spf[i] = i;
	spf[0] = spf[1] = 0;

	for(int i = 2; i * i < N; i++){
		if(spf[i] == i){
			for(int j = i * i; j < N; j += i){
				if(spf[j] == j)
					spf[j] = i;
			}
		}
	}
}
