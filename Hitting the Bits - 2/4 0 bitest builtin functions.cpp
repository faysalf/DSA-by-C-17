#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	bitset<8> b(11), c("01101001"), d("11111111");	//bitset advantage is we can store data greater than 64 bit and do all the operations

	cout << "Count 1: "<< b.count() << '\n';

	cout << "Access bit: "<< b[2] << ' '<< c[5]<<'\n'; //right side theke index gone

	cout << "Size: " << b.size() << '\n';

	cout << "Empty check: "<< b.any() << '\n';

	cout << "If none: " << b.none() << '\n';

	cout << "all: " << c.all() << ' '<< d.all()<< "\n\n"; //d er all bit set

	cout << c << '\n';
	c.set(7);		//7th bit on
	cout << "After 7th bit on: "<< c << '\n';

	c.set(3, 0);
	cout << "After 3rd bit off: "<< c << '\n';

	cout << "set all bit 1: "<< c.set() << "\n\n";

	cout << "sob bit ke ultano: "<< c.flip()<< '\n';
	cout << "3rd bit ultano: "<< c.flip(3) << "\n\n";

	b.set();
	cout << "String e convert: "<< b.to_string() << '\n';
	cout << "ulong e convert: " << b.to_ulong() << '\n';
	cout << "ullong e convert: "<< b.to_ullong() << '\n';

	return 0;
}