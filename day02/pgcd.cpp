
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <math.h>
#define endl '\n'
#define ll long long

ll pgcd(ll n, ll m)
{
    return m == 0 ? n : pgcd(m, n % m);
}

int main()
{
    ll n, res;
    std::cin >> n;
    std::vector<ll> nums(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> nums[i];
    }
    res = nums[0];
    for (ll i = 1; i < n; i++)
    {
        res = pgcd(res, nums[i]);
    }
    std::cout << res << endl;
}