vector<long long> pref(n + 1);

for (int i = 1; i <= n; i++) {
    cin >> a[i];
    pref[i] = pref[i-1] + a[i];
}

// Sum of [l, r]
ll sum = pref[r] - pref[l-1];
