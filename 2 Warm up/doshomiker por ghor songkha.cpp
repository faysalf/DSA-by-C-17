#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	double d = 2.563653535536343434;
	double e = 2.45;
	cin >> d >> e;

	cout << d << '\n' << e << '\n';

	cout << setprecision(10) <<		//10 ghor ba beshi thakle 10 ghor nibe
	d << '\n' << e << '\n';

	cout << fixed << setprecision(10)
	<< d << '\n' << e << '\n';		//10 ghor na thakleo fixed hisebe 0 add kore nibe

	return 0;
}  