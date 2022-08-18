#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
bool f[N];

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    vector <int> primes;

    f[1] = true;                        //f[1] kata
    for (int i=2; i<=n; i++){
        if (!f[i]){                     //jodi false hoy - jodi na kata jay
            primes.push_back(i);
            for (int j=i+i; j<=n; j+=i){
                f[j] = true;                //at first it create with false
            }
        }
    }
    for (auto x: primes) cout << x << ' ';

    return 0;
}
