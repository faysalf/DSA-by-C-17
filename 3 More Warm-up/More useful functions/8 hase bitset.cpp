#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	bitset<4> b(8);
    cout<<b<<'\n';
    hash<bitset<4>> hash_fn;

    cout << hash_fn(b);
	return 0;
}