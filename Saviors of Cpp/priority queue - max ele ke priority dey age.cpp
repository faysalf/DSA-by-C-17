#include<bits/stdc++.h>
using namespace std;

struct cmp {
  bool operator()(int a, int b) const {
    return a * a < b * b;
  }
};
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  priority_queue<int> q;
  q.push(2);
  q.push(3);
  q.push(4);
  cout << q.top() << '\n';
  q.pop();
  cout << q.top() << '\n';
  cout << q.size() << '\n';
  cout << q.empty() << '\n';
  priority_queue<int, vector<int>, greater<int>> minq;
  minq.push(4);
  minq.push(2);
  minq.push(3);
  cout << minq.top() << '\n';

  priority_queue<int, vector<int>, cmp> customq;
  customq.push(4);
  customq.push(2);
  customq.push(3);
  cout << customq.top() << '\n';
  return 0;
}