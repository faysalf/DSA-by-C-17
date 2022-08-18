#include <bits/stdc++.h>
using namespace std;

int main ()
{
  bitset<8> foo (string("10110011"));

  if (foo.any())
    cout << foo << " has " << foo.count() << " bits set.\n";
  else
    cout << foo << " has no bits set.\n";

  return 0;
}