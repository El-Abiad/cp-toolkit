// Euclidean algorithm
// Time: O(log min(a, b))
// Space: O(1)

long long gcd(long long a, long long b){
	while(b != 0){
		long long remainder = a % b;
		a = b;
		b = remainder;
	}
	return a;
}
