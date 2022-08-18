#include <bits/stdc++.h>
#define ll long long
#define fs first
#define sc second
using namespace std;

const int N = 100005;
ll arr[N];
vector <pair<ll,ll>> tree(N*4);

void build(ll node, ll s, ll e){
    if (s==e){
        tree[node] = {arr[s],1};
        return;
    }
    ll left_chi = 2*node;
    ll right_chi = 2*node + 1;
    ll mid = (s+e) / 2;
    build(left_chi, s, mid);
    build(right_chi, mid+1, e);

    //ll a = tree[2*node];
    //ll b = tree[2*node+1];

    if (tree[2*node].fs < tree[2*node+1].fs) tree[node] = {tree[2*node].fs, tree[2*node].sc};     //je pair chhuto segula rakhbo
    else if (tree[2*node].fs > tree[2*node+1].fs) tree[node] = {tree[2*node+1].fs, tree[2*node+1].sc};
    else tree[node] = {tree[2*node].fs, tree[2*node].sc + tree[2*node+1].sc};
    return;
}
ll query(ll node, ll s, ll e, ll i, ll j){
    if (e<i or j<s) return INT_MAX;                           //return appropriate value

    if (s>=i and e<=j){
        return tree[node].fs;
    }
    ll left_chi = 2*node, right_chi = 2*node + 1;
    ll mid = (s+e) / 2;
    ll a = (query(left_chi,s,mid,i,j));
    ll b = (query(right_chi,mid+1,e,i,j));
    return min(a,b);
}
void update(ll node, ll s, ll e, ll i, ll x){
    if (s>i or e<i) return;
    if (s==e and s==i){
        tree[node] = {x, 1};
        return;
    }
    ll left_chi = 2*node, right_chi = 2*node + 1;
    ll mid = (s+e) / 2;
    update(left_chi, s, mid,i,x);
    update(right_chi, mid+1, e, i, x);
    if (tree[2*node].fs < tree[2*node+1].fs) tree[node] = {tree[2*node].fs, tree[2*node].sc};
    else if (tree[2*node].fs > tree[2*node+1].fs) tree[node] = {tree[2*node+1].fs, tree[2*node+1].sc};
    else tree[node] = {tree[2*node].fs, tree[2*node].sc + tree[2*node+1].sc};
    return;
}
ll count_mini(ll node, ll s, ll e, ll i, ll j, ll numb){
    if (s>j || e<i) return 0;
    //if ((e<=i || s>=i) && tree[node].fs>numb) return 0;
    if (s>=i && e<=j){
        if (tree[node].fs == numb) return tree[node].sc;    //if true: return count
        else return 0;
    }
    ll left_chi = 2*node, right_chi = 2*node + 1;
    ll mid = (s+e) / 2;
    ll left = (count_mini(left_chi,s,mid,i,j, numb));
    ll right =(count_mini(right_chi,mid+1,e,i,j,numb));
    return left+right;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin>>n>>m;
    for (int i=1; i<=n; i++){
        cin >> arr[i];
    }

    build(1,1,n);
    while (m--){
        ll num,i,v; cin>>num>>i>>v;
        if (num==1){
            update(1,1,n,i+1,v);
        }
        else{
            ll res = query(1,1,n,i+1,v);
            ll mn = count_mini(1,1,n,i+1,v,res);
            cout << res << ' '<<mn<<'\n';
        }
    }
    return 0;
}
