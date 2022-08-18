#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  map<int, string> mp;	//advantage: jei index nibo shudhu sei ind nilee hoy. ex 100 nile 1-100 declair kora lagbena
  mp[2] = "two";
  mp[100] = "hundred";
  mp[2] = "twwwwo";
  mp[3] = "three";

  auto it = mp.begin();
  cout << (*it).first << ' ' << (*it).second << '\n';
  cout << it -> first << ' ' << it -> second << '\n'; //same like above
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << ' ' << it -> second << ' ';
  } cout << '\n';

  for (auto x: mp) {			//works like above
    cout << x.first << ' ' << x.second << ' ';
  }cout << '\n';

  cout << mp[3] << '\n';		//find val by it's key
  cout << "Size Bf: "<< mp.size() << '\n';
  mp[4];						//put 0 in m[4]
  cout <<"Size af: "<< mp.size() << '\n';


  map<int, int> m;
  m[1]++;			//put 1 in m[1]	
  m[3] = 2;
  cout << m[1] << '\n';
  if (m.find(1) != m.end()) {
    cout << "1 exists\n";
  }
  for (auto i:mp) cout << i.first << ' '<<i.second << ' ';
  cout << '\n';

  it = mp.find(3);
  mp.erase(it);			//erase
  for (auto i:mp) cout << i.first << ' '<<i.second << ' ';
  cout << '\n';

  return 0;
}