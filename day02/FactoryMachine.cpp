
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll unsigned  long long

using namespace std;

ll mod = 1000000007;
using namespace std;
ll powermod(ll x, ll p)
{
	if (p == 0) return (1);
	ll res = powermod(x, p/2) % mod;
	if (p%2)
		return ((((res * res) % mod) * (x % mod)) % mod);
	return ((res * res) % mod);
}
ll power(ll x, ll p)
{
	if (p == 0) return (1);
	ll res = power(x, p/2);
	if (p%2)
		return ((res * res) * x);
	return (res * res);
}

ll time(vector<ll> &a, ll t)
{
	ll res = 0;
	for (ll i = 0; i < a.size(); i++)
		res += t / a[i];
	return (res);
}

void solve()
{
	ll n, p; cin >> n >> p;
	vector<ll> a(n);
	for (ll i = 0; i < n; i++)
		cin >> a[i];

	ll f = 0;
	ll l = 1e19 + 1e13 * 2;
	ll t = (l + f) / 2;

	ll r,s;
	while (f <= l)
	{
		r = time(a, t);
		s = time(a, t-1);

		if (s < p && r >= p)
		{
			f = t;
			break;
		}

		if (r < p)
		{
			f = t + 1;
			t = (l + f) / 2;
		}
		else
		{
			l = t - 1;
			t = (l + f) / 2;
		}
	}
	cout << f << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}