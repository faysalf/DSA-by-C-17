#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  unordered_set<int> se;
  se.insert(3);
  se.insert(2);
  auto it = se.begin();
  cout << (*it) << '\n';
  ++it;
  cout << (*it) << '\n';
  se.insert(3);
  for (auto x: se) {
    cout << x << ' ';
  }
  cout <<'\n';
  se.insert(2);
  se.insert(1);
  se.insert(2);
  for (auto x: se) {
    cout << x << ' ';
  }
  cout <<'\n';

  cout << (*se.begin()) << '\n';

  se.erase(se.begin());
  for (auto x: se) {
    cout << x << ' ';
  }
  cout <<'\n';
  se.erase(3);
  for (auto x: se) {
    cout << x << ' ';
  }
  cout <<'\n';

  se.insert(5);
  it = se.find(5);
  if (it != se.end()) {
    cout << "5 exists\n";
  }
  return 0;
}