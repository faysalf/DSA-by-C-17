#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n = 12;
	cout << __builtin_clz(n) << '\n';	//count leading zeroes = 28 : 32 bit theke 4 num ta used

	cout << __builtin_ctz(n) << '\n';	//count trailing zeroes = 2 : 2 1 duiti bit 0

	return 0;
}