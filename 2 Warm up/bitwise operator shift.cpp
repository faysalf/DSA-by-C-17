#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a = 5, b= 2;
	// xor : truely different bit &
	cout << (a ^ b) << '\n';

	// left shift = multiply by 2; here 5 * 2^2
	cout << (a << b) << '\n';

	// right shift = devide by 2; here 5 / 2^2
	cout << (a >> b) << '\n';
	return 0;
}