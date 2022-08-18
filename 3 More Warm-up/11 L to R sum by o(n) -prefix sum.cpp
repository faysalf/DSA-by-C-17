#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int arr[n+1];

	int prefix[n+1]; prefix[0] = 0;

	for (int i=1; i<=n; i++) {
		cin >> arr[i];
		prefix[i] = arr[i] + prefix[i-1];
	}
	//prefix sum kore niyechhi. pore jeno just +- kore sum pawa jay. details in E.B

	for (int i:prefix) cerr << i << ' ';	//for justify. not work on output file

	int q; cin >> q;
	while (q--) {
		int l, r; cin >> l >> r;
		cout << prefix[r] - prefix[l-1] << '\n';	//r porjont sum niye l er ag porjonyo minus kore dibo
	}

	return 0;
}

//ei prefix er idea diye onek problem solve kora jay