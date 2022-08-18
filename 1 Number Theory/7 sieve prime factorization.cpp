#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
int spf[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for (int i = 2; i < N; i++) {     //apatoto i rakhlam i ghore
    spf[i] = i;
  }
  for (int i = 2; i < N; i++) {     //i er jonyo abar sobgulote jabo
    for (int j = i; j < N; j += i) {
      spf[j] = min(spf[j], i);      //minimum divisorgula newa
    }
  }
  int q; cin >> q; // queries q <= 1e6
  while (q--) {
    int n; cin >> n; // find prime factorization of n <= 1e6
    vector<int> ans;
    while (n > 1) {
      ans.push_back(spf[n]);
      n /= spf[n];          //to 1 er cheye boro sob small divisorgulae prime factor
                            //tai, oi prime divisor diye divide kore another prime factor
                            //khujbo. jotokkhon na prime asbe loop cholbe
    }
    for (auto x: ans) cout << x << ' '; cout << '\n';
  }
  return 0;
}
