
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#define endl '\n'
#define ll long long
#define dv 998244353


int is_prime(int n)
{
    for (ll i = 2; i < n; i++)
    {
        if(n % i == 0)
            return(0);
    }
    return(1);
}

void prime_fact(ll n)
{
    for (ll i = 2; i <= n; i++)
    {
        if(n % i == 0 && is_prime(i)){
            std::cout << i << " ";
        }
    }
}

int main()
{
    ll n, i;
    std::cin >> n;
    std::cout << n << ": ";
    for (ll i = 2; i <= n; i++)
    {
        prime_fact(n);
        n = n / i;
    }
}