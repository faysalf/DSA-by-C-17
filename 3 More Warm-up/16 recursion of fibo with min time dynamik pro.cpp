#include <bits/stdc++.h>
using namespace std;
#define int long long int

int dpSave[60];
int fibo(int n) {
	if (n==0) return 0;
	if (n==1) return 1;		//egula limitation. na dile infinite hoye jabe

	if (dpSave[n] != -1) return dpSave[n];
	dpSave[n] = fibo(n-1) + fibo(n-2);
	return dpSave[n];
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	memset(dpSave, -1, sizeof dpSave);
	cout << fibo(40) << '\n';

	return 0;
}