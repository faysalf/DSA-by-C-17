#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  while (q--) {
    int x; cin >> x;
    bool ok = false;
    int l = 1, r = n;
    while (l <= r) {
      int mid = (l + r) / 2;
      if (x < a[mid]) {
        r = mid - 1;
      }
      else if (x > a[mid]) {
        l = mid + 1;
      }
      else {
        ok = true;
        break;
      }
    }
    if (ok) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
  return 0;
}