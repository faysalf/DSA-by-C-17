#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Divisors
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){   //monkey case
            if (n % i == 0){
                cout << i << ' ';
            }
    }cout << "\n\n";

    //human case
    vector <int> divs;
    for (int j=1; j*j <= n; j++){       //use j*j instead of sqrt
        if (n % j == 0){
            divs.push_back(j);
            if (j != n/j) divs.push_back(n/j);
        }
    }
    sort(divs.begin(), divs.end());
    for (auto k: divs){
        cout << k << ' ';
    }
    return 0;
}
