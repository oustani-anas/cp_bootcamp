
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll long long

void incA(std::vector<ll> vect, ll n)
{
    ll count = 0;
    for (ll i = 1; i < n; i++)
    {
        if(vect[i] < vect[i - 1]){
            count += vect[i - 1] - vect[i];
            vect[i] += vect[i - 1] - vect[i];
        }
    }
    std::cout << count << endl;
}

int main()
{
    ll n;
    std::string str;
    std::cin >> n;
    std::vector<ll> vect(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> vect[i];
    }
    incA(vect, n);
}