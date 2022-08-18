#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int arr[5] = {1,2,9,4,3};
	for (int i:arr) cout << i << ' '; cout << '\n';

	reverse(arr,arr+5);
	for (int i:arr) cout << i << ' '; cout << '\n';

	int ar[5] = {1,9,3,5,2};
	sort(ar+1,ar+5);		//that means 2-5 porjonto sort korbe, etae iterator

	for (int i:ar) cout << i << ' ';

	return 0;
}