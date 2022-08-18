#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a = 10, b = 20;
	cout << max(a,b) << '\n';
	cout << min(a,b) << '\n';

	cout << min({a,b,3,34,5}) << '\n'; //ekadhik element e korte {} vitore newa lage
	cout << max({a,b,3,34,5}) << '\n';

	//min max in an array
	int arr[5] = {5,6,12,43,25};
	cout << *max_element(arr, arr+5) << '\n';
	cout << *min_element(arr+2, arr+4) << '\n';


	return 0;
}