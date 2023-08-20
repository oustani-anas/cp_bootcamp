

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
    if(m == 0)
        return n;
    else
        return(pgcd(m, n % m));
}

ll lcm(ll n, ll m)
{
    return ( n * m / pgcd(n ,m));
}

int main()
{
    ll n, m;
    std::cin >> n >> m;
    std::cout << lcm(n, m) << endl;
}