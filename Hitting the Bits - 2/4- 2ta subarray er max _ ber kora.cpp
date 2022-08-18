//1000 ti array theke emon 2ta array ber koro jader intersec/cap maximum

#include<bits/stdc++.h>
using namespace std;

set<int> se[1010];
bitset<1010> mask[1010];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  bitset<20> b(12), c("1101");
  //built in function for bitset
  // cout << b << '\n'; 
  // cout << c << '\n';
  // cout << (b & c) << '\n';
  // cout << b[3] << '\n';
  // cout << b.count() << '\n';
  int n = 2;
  se[0] = set<int>({1, 2, 3, 6});
  se[1] = set<int>({1, 3, 5});
  for (int i = 0; i < n; i++) {
    for (auto x: se[i]) {
      mask[i][x] = 1;
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int cnt = (mask[i] & mask[j]).count();
      ans = max(ans, cnt);
    }
  }
  cout << ans << '\n';
  return 0;
}