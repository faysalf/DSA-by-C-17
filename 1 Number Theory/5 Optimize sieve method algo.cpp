#include <bits/stdc++.h>
using namespace std;

const int N = 1e8 + 9;
bool f[N];

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    auto st = clock();
    int n = N-9;
    vector <int> primes;

    f[1] = true;
    for (int i=2; i*i <= n; i++){   //i*i : n ke katte tar cheye chhuto prime num diye kata hoyechhe
        if (!f[i]){
            for (int j=i*i; j<=n; j+=i){  //j = i*i : jegulo prev prime diye kata achhe segulo eriye jawar jonyo
                f[j] = true;
            }
        }
    }
    for (int i=2; i<=n; i++) if (!f[i]) primes.push_back(i);

    cout << primes.size() << '\n';
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC <<'\n';
return 0;
}
