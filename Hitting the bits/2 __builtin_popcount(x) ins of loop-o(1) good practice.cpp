#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n = 19;
	int count = __builtin_popcount(n);	//count the number of 1 is in this bits

	// for (int i=0; i<=30; i++) {	//30 bit
	// 	if ((n >> i) & 1) count++;
	// }
	cout << count << '\n';

	return 0;
}