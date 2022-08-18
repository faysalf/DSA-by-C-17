#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n = 11;
  cout << __builtin_popcount(n) << '\n';
  int count = 0;
  for (int i = 0; i < 30; i++) {
    if ((n >> i) & 1) {
      count++;
    }
  }
  cout << count << '\n';
  assert(__builtin_popcount(n) == count);


  cout << "clz : "<< __builtin_clz(16) << '\n'; //27 cause 31 (bit of int) - 5 (bit of 16)
  cout << "ctz : "<< __builtin_ctz(16) << '\n';

  return 0;
}