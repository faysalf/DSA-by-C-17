#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s; cin >> s;
	int len = s.length();

	/*bool flag = true;
	for (int i=0; i <= len/2; i++) {
		if (s[i] != s[len-i-1]) {
			flag = false;
			break;
		}
	}*/
	
	/*string rev = "";
	for (int i=len-1; i >= 0; i--) {
		rev += s[i];
	}*/

	string rev = s;
	reverse(rev.begin(), rev.end());
	if (s==rev) cout << "Pallindrome\n";
	else cout << "Not Pallindrome\n";
	return 0;
}