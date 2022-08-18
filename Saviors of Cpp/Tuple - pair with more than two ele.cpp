#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	tuple <int, string, double> tu;

	tu = make_tuple(165991, "Faysalf", 3.68);

	cout << "Roll is: "<< get<0>(tu) << "\nName is: "<< get<1>(tu)
	<< "\nGPA = " << get<2>(tu) << '\n';

	///Swap available between two tupple

	return 0;
}