

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <math.h>
#define endl '\n'
#define ll long long

ll mod = 1e9 + 7;

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
    ll a, b, n, res = 1;
    std::cin >> n;
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        res = exp(a, b) % mod; 
        std::cout << res << endl;
    }
}

