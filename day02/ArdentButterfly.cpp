
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll long long


ll binarySearch(std::vector<ll>& arr, ll t, ll left, ll right) {
    if (left > right) {
        return -1;
    }

    ll mid = left + (right - left) / 2;

    if (arr[mid] == t) {
        return arr[mid];
    } else if (arr[mid] < t) {
        return binarySearch(arr, t, mid + 1, right);
    } else {
        return binarySearch(arr, t, left, mid - 1);
    }
}

int main()
{
    ll n, m;
    std::cin >> n;
    std::vector<ll> vect(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> vect[i]; 
    }
    std::cin >> m;
    std::vector<ll> butter(m);
    for (ll i = 0; i < m; i++)
    {
        std::cin >> butter[i];
    }
    for (ll i = 0; i < butter.size(); i++)
    {
        if(binarySearch(vect, butter[i], 0, vect.size() - 1) > 0)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
}