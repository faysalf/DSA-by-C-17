#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int m = 10, n = 20; cout << m << '\n';
	swap(m,n);
	cout << m << '\n';

	cout << gcd(12,16) << '\n';		//c++14 te __gcd()
	
	/* 12 = 1,2,3,4,6,12
	   16 = 1,2,4,8,16
	   so greatest common is 4.*/

	return 0;
}