/*question> 0-n porjonto kotogula x,y pair achhe jekhane x^y == c hobe? n <= 1e5

a^b==0 hole a==b; xor holo same bit zero, different hole 1
a^b^s = 0^s, a^b = 0, a = b; --same bit (s) kata diye
=> a^b = c^d, a = c^d^b lekha jay; normal equation, a = c+d-b hoto, but xor a dif
so, x^y == c, s = c^y */

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, c, count = 0; cin>> n>>c;
	for (int i=0; i<=n; i++) {		 //-- monkey solution. & tle khabe - o(n^2)
		for (int j=0; j<=n; j++) {
			if ((i^j) == c) {
				count++;
			}
		}
	}
	cout << count << '\n';

	//human solution  ------------ O(n) ---------------
	int res = 0;
	for (int i=0; i<=n; i++) {
		int j = c^i;

		if (j>=0 && j<=n) res++;
	}
	cout << res << '\n';

	return 0;
}