// Binary exponentiation
// Time: O(log b)
// Space: O(1)

long long power(long long a, long long b, long long mod){
	long long result = 1;
	while(b > 0){
		if(b & 1)
			result = result * a % mod;
		a = a * a % mod;
		b >>= 1;
	}
	return result;
}
