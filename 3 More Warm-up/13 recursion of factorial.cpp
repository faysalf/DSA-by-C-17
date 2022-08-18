#include <bits/stdc++.h>
using namespace std;
#define int long long int

int getFacto(int n) {
	if (n==0) return 1;
	return n * getFacto(n-1);
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cout << getFacto(38) << '\n';

	return 0;
}