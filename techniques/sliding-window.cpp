// Time: O(n)
// Space: O(1)

int l = 0;
int ans = 0, curAns = 0;

for(int r = 0; r < n; r++){
	curAns += a[r];

	while(condition){
		curAns -= a[l];
		l++;
	}
	ans = max(ans, curAns); 
	// or 
	// ans = min(ans, curAns);
}
