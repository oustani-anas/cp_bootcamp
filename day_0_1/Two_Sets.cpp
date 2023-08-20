/**
*  *    author:  aoustani
*   **/
	
// #include "bits/stdc++.h"
#include <algorithm>
#include <cstddef>
#include <iomanip>
#include <ios>
#include <iterator>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <iostream>
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define B begin()
#define E end()
#define all(x)  (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define sz(x) (int)(x.length())
#define yesno(x, y) cout << (x == y ? "YES\n" : "NO\n")
#define print(x) cout << x << '\n'
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define EPS 1e-7
#define debug(var) cout << #var << ": " << var << endl;
#define endl "\n"
#define MAX	2e9
#define MIN	-2e9
#define MOD	1000000007
#define INF	1e17
#define getunique(v)	{sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
 
using namespace std;
	
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef pair <int,int> pi;
typedef vector<pi> vpi;
	
/*
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
*/
 
void solve(){
    ll n; cin >> n;
    ll sum = (n*n+n)/2;
    if (sum%2!=0){
        cout << "NO" << endl;
        return;
    }
    vector<ll> v1,v2;
    ll half=sum/2;
    for (int i=n;i>0;i--){
        if(half-i>=0){
            v1.push_back(i);
            half-=i;
        }
        else {
            v2.push_back(i);
        }
    }
    cout << "YES " << v1.size() << " ";
    for (auto x:v1){
        cout << x <<" ";
    }
    cout << v2.size() << " ";
    for (auto x:v2){
        cout << x <<" ";
    }
    cout << endl;
}
 
bool multi_test_cases = 0;
 
int32_t	main(void)
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t = 1;
	if (multi_test_cases) cin >> t;
 
	while (t--) {
		solve();
	}
 
	return 0;
}