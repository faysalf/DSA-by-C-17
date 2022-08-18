#include <bits/stdc++.h>
using namespace std;

int main () {

  bitset<4> foo (string("1111"));

  std::cout << foo.set() << '\n';       // 1111
  std::cout << foo.set(2,0) << '\n';    // 1011 - right side theke set korbe
  std::cout << foo.set(2) << '\n';      // 1111

  return 0;
}