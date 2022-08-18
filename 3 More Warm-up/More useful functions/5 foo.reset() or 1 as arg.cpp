#include <bits/stdc++.h>
using namespace std;

int main ()
{
  bitset<8> foo (string("00100001"));
  cout << foo.set(1,1) << '\n';     //00100011 - right side theke 1 index

  cout << foo.reset(1) << '\n';    //00100001 reset korle ager oboshthay chole jabe 
  cout << foo.reset() << '\n';     //00000000 sob 0 diye reset korbe

  return 0;
}