#include<bits/stdc++.h>
using namespace std;

const int MAX = 100 + 9; // max element of the array
int a[101], cnt[MAX];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++) {
    cnt[a[i]]++;
  }
  for (int i = 1; i < MAX; i++) {
    for (int j = 1; j <= cnt[i]; j++) {
      cout << i << ' ';
    }
  }
  return 0;
}