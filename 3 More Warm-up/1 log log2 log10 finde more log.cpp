#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cout << log(100) << '\n';	 //base e = 2.718281828

	cout << log2(16) << '\n';	//base 2 = 2^4 = 16 = 4 (ans)

	cout << log10(100) << '\n'; // 10^2 = 2

	//above logs are built in. bsd these we can create others base log

	cout << log(100) / log(6) << '\n'; //6 base 100 er log

	//20 base 5000 er log. e base / 20 base
	cout << log(500) / log(20) << '\n';
	return 0;
}