

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#define endl '\n'
#define ll long long

using namespace std;

int is_prime(int n)
{
    for (ll i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return(0);
    }
    return(1);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n, m, tmp;
    cin >> n >> m;
    tmp = 0;
    for (ll i = n; i <= m; i++)
    {
        if(is_prime(i)){
            cout << i << endl;     
            tmp++;
        }
    }
    if(tmp == 0)
       cout << "Absent" << endl;
}