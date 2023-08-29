
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll unsigned  long long

using namespace std;

struct segTree {
	typedef ll T;
	static const T identity = 1e18;
	T fn(T a, T b) { return min(a, b); }
	vector<T> s; ll n;
	segTree(ll n = 0, T def = identity) : s(4*n, def), n(n) {}
	void update(ll pos, T val) {
		for (s[pos += n] = val; pos /= 2;)
			s[pos] = fn(s[pos * 2], s[pos * 2 + 1]);
	}
	T query(ll b, ll e) {
		T ra = identity, rb = identity;
		for (b += n, e += n; b < e; b /= 2, e /= 2) {
			if (b % 2) ra = fn(ra, s[b++]);
			if (e % 2) rb = fn(s[--e], rb);
		}
		return fn(ra, rb);
	}
};


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	segTree st(n);
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		st.update(i, x);
	}
	while (m--) {
		int q, a, b;
		cin >> a >> b;
		cout << st.query(--a, b) << endl;
	}
}