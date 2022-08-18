#include <bits/stdc++.h>
using namespace std;

int arr[10], cnt[11];			//a[i] <= 10
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a; cin >> a;
	for (int i=0; i<a; i++) {
		cin >> arr[i];
	}
	for (int ele = 0; ele < a; ele++) {
		cnt[arr[ele]]++;
	}
	int mx = 0;
	for (int m=0; m<a; m++) {
		mx = max(mx,cnt[m]);
	}

	cout << mx << '\n';

	return 0;
}