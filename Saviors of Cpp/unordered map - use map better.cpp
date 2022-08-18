#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  unordered_map<int, int> mp; //keys sorted thakena
  mp[3] = 2;
  mp[5] = 2;
  mp[2] = 1;
  mp[23] = 1;
  mp[1] = 2;
  for (auto x: mp) {
    cout << x.first << ' ' << x.second << '\n';
  }

  unordered_map<int, int> cnt;
  // input:
  // 5
  // 3 2 4 5 5
  // find the maximum frequency of any element
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    cnt[x]++;
  }
  int ans = 0;
  for (auto x: cnt) {
    ans = max(ans, x.second);
  }
  cout << ans << '\n';
  return 0;
}