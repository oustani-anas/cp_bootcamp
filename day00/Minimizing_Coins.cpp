
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll long long

//  solve(11) = min [ solve(11 - 1) + 1, slove(11 - 5) + 1, solve(11 - 7) + 1]

std::vector<ll> solves;

int solve(ll m)
{
    if(m == 0)
}

int main()
{
    ll n, x, max;
    std::cin >> n >> x;
    std::vector<ll> vect(n);
    std::vector<ll> slv(n);
    
    for (ll i = 0; i < n; i++)
    {
        std::cin >> vect[i];
    }
    for (ll i = 0; i < n; i++)
    {
        slv[i] = 
    }
    
    //std::sort(vect.begin(), vect.end());
    
}