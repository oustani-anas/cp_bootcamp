
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll unsigned  long long

using namespace std;

const ll NMAX = 100000000;
ll n, q;
ll a[NMAX], tree[NMAX];


ll sum(int k){
    ll s = 0;
    while(k>0){
        s+=tree[k];
        k-=k&-k;
    }
    return s;
}


ll arr_max(ll i){
    ll mx = 0;
    while (i > 0){
        cout << "test" << endl;
        if(tree[i] > mx)
            mx = tree[i];
        i -=i&-i;
    }
    return mx;
}

void add(int k, ll x){
    while(k<=n){
        tree[k]+=x;
        k+=k&-k;
    }
}



int main(){
    cin >> n >> q;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        //add(i, a[i]);
    }
    while(q--){
        ll l, r; cin >> l >> r;l-- , r--;
        //cout << "arr_max r " << arr_max(r) << endl;
        //cout << "arr_max l " << arr_max(l) << endl;
        cout << max(arr_max(r), arr_max(l)) << endl;
    }
    return 0;
}