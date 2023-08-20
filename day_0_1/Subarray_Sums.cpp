
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll long long


int main()
{
    ll n, x, res = 0;
    std::map<ll, ll> mymap;

    std::cin >> n >> x;
    std::vector<ll> vect(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> vect[i];
    }
    std::vector<ll> psum(n, 0);
    for (ll i = 1; i <= n; i++)
    {
        psum[i] = vect[i - 1] + psum[i - 1];
    }
    for (ll i = 0; i <= n; i++)
    {
        if(mymap.find(psum[i] - 7) == mymap.end())
            mymap[psum[i]]++;
        else
            res++;
    }
    std::cout << res << endl;
}