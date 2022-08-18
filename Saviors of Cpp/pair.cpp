#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	pair <int, int> point;

	point = make_pair(165091, 468);
	//cin >> point.first >> point.second;		//get input
	cout << point.first << ' ' << point.second << '\n';

	pair <int, int> p1, p2;
	p1 = make_pair(123,16);
	p2 = make_pair(543, 25);

	cout << p1.first << ' ' << p2.second << '\n';

	pair <int, string> poin[10];		//pair array
	for (int i=1; i<=10; i++) {
		poin[i-1] = make_pair(165090+i,"Faysal");
	}
	for (auto i:poin) cout << i.first << ' ' << i.second << '\n';
	//cout << poin[1].first <<' '<< poin[4].second << '\n';

	pair <pair <int, int>, int> par;
	par = make_pair(make_pair(1,2),3);
	pair <pair <int, int>, int> par = make_pair(make_pair(1,2),3);
	cout << par.first.first << ' ' << par.first.second << ' ' << par.second << '\n';

	return 0;
}