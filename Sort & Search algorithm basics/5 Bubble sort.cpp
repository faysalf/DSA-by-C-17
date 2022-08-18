//compare kore swap kora

#include<bits/stdc++.h>
using namespace std;

int a[101];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int step = 1; step <= n; step++) {
    for (int i = 1; i < n; i++) {
      if (a[i] > a[i + 1]) {
        swap(a[i], a[i + 1]);
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << a[i] <<' ';
  }
  return 0;
}