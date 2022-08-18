#include <bits/stdc++.h>
using namespace std;

int main ()
{
  bitset<8> foo (string("00000000"));

  if (foo.none())
    cout << foo << " has no bits set.\n";
  else
    cout << foo << " has " << foo.count() << " bits set.\n";

  return 0;
}