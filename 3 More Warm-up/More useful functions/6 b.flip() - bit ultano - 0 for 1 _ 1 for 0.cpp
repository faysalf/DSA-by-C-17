#include <bits/stdc++.h>
using namespace std;

int main () {

  bitset<8> foo (string("10010010"));

  cout << foo.flip(2) << '\n';  //right side theke 2 ind ke ultiye dibe
  cout << foo.flip() << '\n';   //purata ultiye dibe

  return 0;
}