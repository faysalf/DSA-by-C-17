#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int sum = 0;
	for (int i=1; i<=10; i++) {
		if ((i&1) == 0) {
			sum += i;
			cerr << i << '\n';

			/*cerr eta justify korar jonyo je operation sothik kaj
			kortechhe kina. eta soho submit dile WA hobe na. cause er value
			output file a add hobena. error steam a show korbe.*/
		}
	}
	cout << sum << '\n';	//cout diye direct output file a output pawar jonyo

	return 0;
}