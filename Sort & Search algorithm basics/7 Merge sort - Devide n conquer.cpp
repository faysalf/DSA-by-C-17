//merger sort is a way of divide & conquer
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int a[N];
void merge_sort(int l, int r) {
  if (l >= r) return;
  int mid = (l + r) / 2;
  merge_sort(l, mid);
  merge_sort(mid + 1, r);
  vector<int> L, R;
  for (int i = l; i <= mid; i++) {
    L.push_back(a[i]);
  }
  for (int i = mid + 1; i <= r; i++) {
    R.push_back(a[i]);
  }
  int Lid = 0, Rid = 0, i = l;
  while (Lid < (int)L.size() or Rid < (int)R.size()) {
    if (Lid == (int)L.size()) {
      a[i] = R[Rid];
      Rid++; i++;
    }
    else if (Rid == (int)R.size() or L[Lid] < R[Rid]) {
      a[i] = L[Lid];
      Lid++; i++;
    }
    else {
      a[i] = R[Rid];
      Rid++; i++;
    }
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x, n = 0;
  while (cin >> x) {
    a[++n] = x;
  }
  merge_sort(1, n);
  for (int i = 1; i <= n; i++) {
    cout << a[i] << ' ';
  }
  cout << '\n';
  return 0;
}