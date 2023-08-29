
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

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n, nums, nav, C, output; cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> nums;
        vector<ll> vect(nums);
        for (ll i = 0; i < nums; i++)
            cin >> vect[i];
        nav = 10 - nums;
        // lets calculate the poss C(n, k) = n! / (k! * (n - k)!)
        // output = ((res % mod) * (exp((occurs % mod), mod - 2)) % mod) % mod;
        C = ((factorielle(nav) % mod) * exp((2 * factorielle(nav - 2)) % mod, mod - 2)) % mod;
        output = C * 6;
        cout << output << endl;
    }
    
}