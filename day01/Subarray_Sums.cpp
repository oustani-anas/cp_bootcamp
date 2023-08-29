#include <iostream>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int main()
{
    ll n, q, res = 0; cin >> n >> q;
    vector <ll> arr(n + 1);
    map <ll, ll> mp;
    mp[0] = 1;
    for (size_t i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i -1];
        if(mp.find(arr[i] - q) != mp.end())
        {
            res += mp[arr[i] - q];
        }
        mp[arr[i]]++;
    }
    cout << res << endl;
}