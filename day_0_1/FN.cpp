#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll long long

int main()
{
    ll n;
    std::cin >> n;
    std::vector<int> vect(n + 1);
    for (ll i = 0; i <= n; i++)
    {
        if(i == 1 || i == 0)
            vect[i] = 1;
        else 
            vect[i] = vect[i - 1] + vect[i - 2];
    }
    std::cout << vect[n] << endl;
}