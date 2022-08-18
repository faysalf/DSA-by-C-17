#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s = "abcd";
  cout << s << '\n';
  s.push_back('e');
  cout << s << '\n';

  // s += 'e'; => O(1)
  // s = s + 'e'; -> O(len(s))

  s = "e" + s;
  cout << s << '\n';

  string a = "xy", b = "yz";
  cout << a + b << '\n';

  reverse(s.begin(), s.end());
  cout << s << '\n';
  return 0;
}