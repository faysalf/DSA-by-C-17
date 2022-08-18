#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x = 5, y = 10;
  cout << (x & y) << '\n';
  cout << (x ^ y) << '\n';
  cout << (x | y) << '\n';
  cout << (x << 3) << '\n';
  cout << (y >> 1) << '\n';

  int n = 11;
  if (n & 1) {
    cout << "The last bit is on\n";
    cout << "The number is odd\n";
  }
  if (n & (1 << 3)) {
    cout << "The 3rd bit is on\n";
  }
  int k = 4;
  if (n & (1 << k)) {
    cout << "The kth bit is on\n";
  }
  else {
    cout << "The kth bit is off\n";
  }
  if ((n >> k) & 1) {
    cout << "The kth bit is on\n";
  }
  else {
    cout << "The kth bit is off\n";
  }
  // common mistake
  long long w = 1e13 + 9;
  // wrong way
  // if (w & (1 << 40)) { // overflow!!

  // }
  if (w & (1LL << 40)) {

  }
  if ((w >> 40) & 1) {

  }

  n = 11;
  cout << (n | (1 << 2)) << '\n'; // setting the kth bit
  cout << (n & ((1 << 30) - 1 - (1 << 3))) << '\n'; // making the kth bit off
  
  return 0;
}