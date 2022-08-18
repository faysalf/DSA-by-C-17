//how much subarray has in an array that is equal to s
//bit nibo ki nibona eta bitmask er maddhomee kora jay

#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int s; cin >> s;
  int ans = 0;
  for (int mask = 0; mask < (1 << n); mask++) { //jeheto n er position 1 << n e.
    int sum = 0;
    for (int i = 0; i < n; i++) {
      if ((mask >> i) & 1) {  // (1<<i) & mask -> if mask er ith bit on
        sum += a[i];  //if ith bit is on, then i take sum koro
      }
    }
    if (sum == s) {
      ++ans;
    }
  }
  cout << ans << '\n';
  return 0;
}