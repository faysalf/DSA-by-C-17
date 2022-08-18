#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int arr[3] = {2,3,1}; sort(arr, arr+3);

	do {
		cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << '\n';
	}
	while (next_permutation(arr, arr+3));


	//by 2 elements		----------  ----------
	do {
		cout << arr[0] <<' '<< arr[1] << '\n';
	}
	while (next_permutation(arr, arr+3));

	return 0;
}