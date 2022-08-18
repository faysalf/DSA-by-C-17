#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x; cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  bool exist = false;
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      exist = true;
    }
  }
  if (exist) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
  return 0;
}