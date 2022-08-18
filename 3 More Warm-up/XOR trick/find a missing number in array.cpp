#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n = 6;
	int arr[n-1] = {1,2,3,5,6};

	int res = 0;
	for (int i = 1; i<=n; i++) {
		res ^= i;				//1-n sobgulor xor
	}
	for (int i:arr) {
		res ^= i;
		/*given numbers er sathe xor korle ager tar sathe duplicate hoy,
		without missing number. r duplicate value has not effect on output*/
	}
	cout << res << '\n';

	return 0;
}