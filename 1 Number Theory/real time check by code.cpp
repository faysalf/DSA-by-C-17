#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;
bool f[N];

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    auto st = clock();    //1st line for taking exact time now

    int n= 1e7;
    vector <int> primes;

    for (int i=2; i<=n; i++){
        if (!f[i]){
            primes.push_back(i);
            for (int j=i+i; j<=n; j+=i){
                f[j] = true;
            }
        }
    }
    for (int j:primes) cout << j << ' ';

    cerr <<'\n'<< 1.0 * (clock() - st) / CLOCKS_PER_SEC << '\n';  //last line for getting output
    //ekhon abar clock theke present time minus kore sec a convert kore nicchi.
    //1.0 multiple kora hocche double hole double pawar jonyo. 1000 diye multiple korle milisecond a jabe
    //cerr diye korle contest a o kono provab porbena
return 0;
}
