#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int a[N];
int t[N*4];  //n*4 ti node lage

void build(int node, int b, int e){                     //b means begin,e end
    if (b==e){
        t[node] = a[b];
        return;
    }
    int l = 2*node;     //node er left index 2*node
    int r = 2*node + 1; //node er right index 2*node+1
    int mid = (b+e) / 2;
    build(l,b,mid);
    build(r, mid+1, e);     //recursive
    t[node] = t[l] + t[r];      //node = left_child + right_child
}

int query(int node, int b, int e, int i, int j){ //i-j ranger sum
    if (e<i or j<b) return 0;       //i-j range jodi a-b ranger totally baire hoy

    if (b>=i and e<=j){  //if i-j range er vitore or soman hoy a-b range, tahole node return kore dibe
        return t[node];
    }
    //if intersect hoy(2 child a e jawa lage),2diker sum tae lagbe and ta korbo recursive er maddhome
    int l = 2*node, r = 2*node + 1;
    int mid = (b+e) / 2;
    return query(l,b,mid,i,j) + query(r,mid+1,e,i,j);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 5;
    for (int i=1; i<=n; i++){           //array create for a query
        a[i] = i;
    }
    build(1,1,n);                   //build kora - segment tree
    cout << t[1] << '\n';
    cout << query(1,1,n,2,4) << '\n';
return 0;
}
