#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    vector <int> divs;
    for (int i=2; i*i <= n; i++){ //jeheto 1 er cheye boro
        if (n%i == 0){
            while (n%i == 0){
                divs.push_back(i); //i er sobgulo devisor ber korar jonyo
                n /= i;
            }
        }
    }
    if (n>1) divs.push_back(n);    //n er devisor na thakle n ekti prime

    for (auto x:divs) cout << x <<' ';

    return 0;
}
