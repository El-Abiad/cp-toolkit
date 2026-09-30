// Check if bit b is set
bool getBit(long long x, int b){
	return (x >> b) & 1LL;
}

// Set bit b to 1
long long setBit(long long x, int b){
	return x | (1LL << b);
}

// Set bit b to 0
long long clearBit(long long x, int b){
	return x & ~(1LL << b);
}

// Flip bit b
long long toggleBit(long long x, int b){
	return x ^ (1LL << b);
}
