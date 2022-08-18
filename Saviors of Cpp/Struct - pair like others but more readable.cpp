#include <bits/stdc++.h>
using namespace std;

struct point {
	int x, y;
	string name;
}q, w;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	point p;		//ekhane declr kore or q, w use korleo pari
	p.x = 10;
	p.y = 20;
	p.name = "Faysal";

	q.x = 165091;
	q.y = 4340;
	q.name = "Ahmed";

	cout << p.x + p.y << '\n' << q.x << '\n' << p.name << '\n';

	return 0;
}