
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll unsigned  long long

using namespace std;

const ll mod = 1e9 + 7;

bool good(vector<ll> &a, ll mid, ll x)
{
	ll groups = 0;
	ll sum = 0;
	for (ll i = 0; i < a.size(); i++)
	{
		if (a[i] > mid) return (false);
		if ((sum + a[i]) > mid)
		{
			groups += 1;
			sum = a[i];
		}
		else
		{
			sum += a[i];
		}
	}
	if (sum)
		groups += 1;
	return (groups <= x);
}

void solve()
{
	ll n, x; cin >> n >> x;

	vector<ll> a(n);
	ll sum = 0;
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}

	ll mid;
	ll res=0;
	ll first = 0;
	ll last = sum;
	while (first <= last)
	{
		mid = first + ((last - first) / 2);
		// cout << mid << " ";
		if (good(a, mid, x))
		{
			last = mid - 1;
			res = mid;
		}
		else
			first = mid + 1;
		// cout << first << " " << last << endl;
	}
	cout << res << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}