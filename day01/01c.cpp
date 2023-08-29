

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll long long

/*
    2 -1 3 5 -2
    2  1 4 9 7

*/

int main()
{
    ll n, x, tmp;
    std::cin >> n >> x;

    std::map<ll, ll> mymap;
    for (ll i = 0; i < n; i++)
    {
        std::cin >> tmp;
        mymap[tmp] = 0;
    }
    
    // std::map<ll, ll>::iterator it;
    // for ( it = mymap.begin(); it != mymap.end(); it++)
    // {
    //     std::cout << it->first << " : " << it->second << endl;
    // }

}