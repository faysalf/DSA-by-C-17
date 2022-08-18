#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n = 8;
	int arr[n-2] = {1,2,3,5,6,8};

	int ind = 0;
	
	for (int i = 1; i<=n; i++) {
		if ((arr[ind]^i) != 0) {
			cout << i << ' ';
		}
		else {
			ind++;
		}

	}
	cout << '\n';

	return 0;
}