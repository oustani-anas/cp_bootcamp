
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#define endl '\n'
#define ll long long
#define dv 998244353

int main()
{
    ll a, b, c, d, e, f;
    ll abc, def, res;
    std::cin >> a >> b >> c >> d >> e >> f;
    a %= dv;
    b %= dv;
    c %= dv;
    d %= dv;
    e %= dv;
    f %= dv;
    abc = (((a * b) % dv) * c) % dv;
    def = (((d * e) % dv) * f) % dv;
    res = (dv + ((abc - def) % dv))%dv;
    std::cout << res << endl;
}       