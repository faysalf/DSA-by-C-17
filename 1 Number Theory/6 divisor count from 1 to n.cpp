///divisors for all integers from 1 to n

#include<bits/stdc++.h>
using namespace std;

int d[104];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n = 100;
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j += i) {   //i ke dhore er sob multiplegulote
            //1 jug kore dicchi, cause oi numbertir ekti divisors holo i
      d[j]++;         // d[j] += i // for sum of divisors
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << d[i] << ' ';
  }
  return 0;
}
