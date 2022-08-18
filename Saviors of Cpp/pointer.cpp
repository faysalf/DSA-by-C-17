#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int *p;
	int x = 10;
	p = &x;
	cout << p << ' ' << *p << '\n';

	*p = 20;
	cout << x << '\n';	//cause p er memory address a 20 rakhchhe
						//and x er address p te rakha.

	return 0;
}