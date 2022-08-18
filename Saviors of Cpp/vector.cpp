#include <bits/stdc++.h>
using namespace std;

void print(vector<int> vec) {
	for (int i=0; i<vec.size(); i++) {
		cout << vec[i] << ' ';
	}
	cout << '\n';
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector <int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	print(vec);

	vector <int> v;
	for (int i=0; i<3; i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	print(v);

	v.pop_back();
	print(v);

	vector <pair<int, int>> vt;
	vt.push_back({1,2});
	//auto &ref = vt.emplace_back(4,5);
	cout << vt[0].first << '\n';

	vector <int> vc({1,2,3,4});
	auto beg = vc.begin();
	cout << *beg << '\n';
	beg++;
	cout << *beg << '\n';

	for (auto it = vc.begin(); it != vc.end(); it++) {
		cout << *it << ' ';
	}cout << '\n';

	auto itt = vc.begin() +2;
	cout << *itt << '\n';

	auto a = vector<int>({1, 2, 3});
	reverse(a.begin(), a.end());
	for (int x: a) {
		cout << x << ' ';
	}
	cout << '\n';

	a = vector<int>({1, 2, 3});
	reverse(a.begin(), a.begin() + 2);
	for (int x: a) {
		cout << x << ' ';
	}
	cout << '\n';

	a = vector<int>({1, 2, 3});
	a.erase(a.begin());
	for (int x: a) {
		cout << x << ' ';
	}
	cout << '\n';

	return 0;
}