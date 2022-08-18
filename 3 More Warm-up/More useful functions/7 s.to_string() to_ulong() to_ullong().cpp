#include <bits/stdc++.h>
using namespace std;

int main () {

  bitset<4> foo;
  foo.set();    //will set by 1

  string s = foo.to_string();
  s += 'f';
  cout << s << '\n';      //to string

  long n = foo.to_ulong();  //to long (like int)
  cout << n << '\n';

  long long m = foo.to_ullong();  //to long long
  cout << m << '\n';

  foo.set(2,0);
  cout << foo.to_ulong() << " data - bit " << foo;

  return 0;
}