#include <bits/stdc++.h>
using namespace std;

int main() {
	stack<int> stack;	//stack lifo
	stack.push(21);
	stack.push(22);
	stack.push(24);
	stack.push(25);
	
	//stack.pop();
	//stack.pop();

	while (!stack.empty()) {
		cout << ' ' << stack.top();
		stack.pop();
	}
	cout << '\n';

	queue<int> g;		//queue fifo
	g.push(21);
	g.push(22);
	g.push(24);
	g.push(25);

    while (!g.empty()) {
        cout << ' ' << g.front();
        g.pop();
    }
    cout << '\n';
}
