#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n = 5;
	int arr[n] = {1,2,3,4,5};

	reverse(arr, arr+n);

	for (int i:arr) cout << i << '\n';

	return 0;
}