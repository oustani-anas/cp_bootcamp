
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define endl '\n'
#define ll long long
/*
    3 2 4 5 1 1 5 3
    3 1 5 0 1 0 5 6
*/
void xor_sum(std::vector<ll> &arr, ll n, ll q)
{
    ll a, b, x;
    std::vector<ll> v_xor(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        v_xor[i] = arr[i - 1] ^ v_xor[i - 1];
    }
    for (ll i = 1; i <= q; i++)
    {
        std::cin >> a >> b;
        std::cout << (v_xor[b] ^ v_xor[a - 1]) << endl;
    }
           
}

int main()
{
    ll n, q;

    std::cin >> n >> q;
    std::vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >>  arr[i];
    }
    xor_sum(arr, n, q);
}
