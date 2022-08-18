#include<bits/stdc++.h>
using namespace std;

long long n;
long long search(long long l, long long r, long long k) {
  if (l > r) return -1;
  long long mid = (l + r) / 2;
  long long not_divisible = mid - mid / n;
  if (not_divisible > k) {
    return search(l, mid - 1, k);
  }
  else if (not_divisible < k) {
    return search(mid + 1, r, k);
  }
  else {
    if (mid % n != 0) return mid;
    return search(l, mid - 1, k);
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  long long t; cin >> t;
  while (t--) {
    long long k; cin >> n >> k;
    cout << search(1, (long long)1e18, k) << '\n';
  }
  return 0;
}
// https://codeforces.com/problemset/problem/1352/C