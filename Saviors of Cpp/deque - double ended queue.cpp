#include<bits/stdc++.h>
using namespace std;

void print(deque<int> q) {
  for (auto x: q) {
    cout << x << ' ';
  }
  cout << '\n';
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  deque<int> q;
  q.push_back(2);
  q.push_back(4);
  cout << q[0] << '\n';
  print(q);
  q.pop_back();
  print(q);
  q.push_front(7);
  print(q);
  q.pop_front();
  print(q);
  return 0;
}