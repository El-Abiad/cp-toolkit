#include <iostream>
using namespace std;

long long gcd(long long a, long long b){
	while(b != 0){
		long long remainder = a % b;
		a = b;
		b = remainder;
	}
	return a;
}

int main(){
	long long a, b;
	cin >> a >> b;
	cout << gcd(a, b) << '\n';
	return 0;
}
