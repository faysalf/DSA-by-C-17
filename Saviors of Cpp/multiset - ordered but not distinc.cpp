#include<bits/stdc++.h>
using namespace std;

void print(multiset<int> se) {
  for (auto x: se) {
    cout << x << ' ';
  }
  cout <<'\n';
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  multiset<int> se1;
  se1.insert(2);
  se1.insert(3);
  se1.insert(2);
  se1.insert(2);
  se1.insert(1);
  print(se1);
  auto se2 = se1;
  se1.erase(2);   //it's remove all 2
  print(se1);

  se2.erase(se2.find(2)); //remove 2 exactly once
  print(se2);
  return 0;
}