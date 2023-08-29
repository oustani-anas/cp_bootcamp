
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#define ll long long
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n, x; cin >> n >> x;

	vector<ll> a(n);

	for (ll i = 0; i < n; i++)
		cin >> a[i];

	vector<ll> b(x+1, -1);
	b[0] = 0;

	for (ll i = 1; i <= x; i++)
	{
		for (ll j = 0; j < n; j++)
		{
			if (i - a[j] >= 0)
			{
				ll t = (b[i - a[j]] != -1) ? 1 + b[i - a[j]] : -1;
				if (t != -1)
				{
					if (b[i] == -1)
						b[i] = t;
					b[i] = min(t, b[i]);
				}
			}
		}
	}
	cout << b[x] << endl;
}