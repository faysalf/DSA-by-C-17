#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int arr[5] = {4,5,2};
	sort(arr,arr+5, greater<int>());	//sort by reverse order

	do {
		cout <<arr[0]<<' '<<arr[1]<<' '<<arr[2]<<'\n';
	
	}while (prev_permutation(arr,arr+3));


	//permutation by 2 element
	do {
		cout << arr[0] << ' '<< arr[1] << '\n';
	
	}while (prev_permutation(arr,arr+3));

	return 0;
}