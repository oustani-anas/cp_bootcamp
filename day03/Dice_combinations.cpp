
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll unsigned  long long

using namespace std;

const ll mod = 1e9 + 7;

ll factorielle(ll n) {
    ll r = 1;
    for (int i = 2; i <= n; i++)
        r = (r * i) % mod;
    return r;
}

ll exp(ll a, ll b)
{
    if(b == 0)
        return(1);
    ll res = exp(a, b/2);
    if(b % 2 == 0)
        return(res * res) % mod;
    else
        return((res * res) % mod * (a) % mod) % mod;   
}

