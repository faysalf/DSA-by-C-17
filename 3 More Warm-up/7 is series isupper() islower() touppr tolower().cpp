#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	char s = 'h', t = 'H', n = '9';
	cout << islower(s) << '\n';  //true hole 1, else 0
	cout << isupper(s) << '\n';

	cout << isupper(s) << '\n';
	cout << isdigit(s) << '\n';
	cout << isdigit(n) << '\n';
	cout << isalpha(n) << '\n';
	cout << char(tolower(t)) << '\n';
	cout << char(toupper(s)) << '\n';


	return 0;
}