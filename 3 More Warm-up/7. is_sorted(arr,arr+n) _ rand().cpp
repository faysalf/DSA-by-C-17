#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[6] = {1,3,4,5,6,4};
	cout << is_sorted(arr, arr+5) << '\n';

	cout << is_sorted(arr, arr+6) << '\n';	//sorted ki na

	cout << rand() << '\n';		//return random number
	return 0;
}