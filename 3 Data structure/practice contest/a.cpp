#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
using namespace std;

const int N = 1e7 + 9;

ll arr[N];
struct ST {
  ll tree[4 * N];
  static const int inf = 1e9;
  ST() {
    memset(tree, 0, sizeof tree);
  }

void update(int index, int s, int e, int num)
{
    if (s == num and e == num) {
        tree[index] = 1;
        return;
    }

    if (num < s or num > e) {
        return;
    }
    int mid = (s + e) >> 1;
    update(2 * index, s, mid, num);
    update(2 * index + 1, mid + 1, e, num);

    tree[index] = tree[2 * index] + tree[2 * index + 1];
}
ll query(int index, int s, int e, int qs, int qe)
{
    if (qs <= s and e <= qe) {
        return tree[index];
    }

    if (s > qe or e < qs) {
        return 0;
    }

    int mid = (s + e) >> 1;

    return query(2 * index, s, mid, qs, qe) + query(2 * index + 1, mid + 1, e, qs, qe);
}
}tree;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    for (int t=0; t<n; t++){
        int s; cin>>s;
        for (int g=0; g<s; g++){
            cin>> arr[g];
        }
        int mx = *max_element(arr, arr+s);
        ll ans = 0;
        for (int i=1; i<=s; ++i){
            ans += tree.query(1,1,mx,arr[i]+1,mx);
            tree.update(1,1,mx,arr[i]);
        }
        cout << ans;
    }

    return 0;
}
