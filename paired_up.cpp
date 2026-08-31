#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("pairup.in", "r", stdin);
	freopen("pairup.out", "w", stdout);
	ll n;
	cin >> n;
	vector<ll> cows;
	for (ll i = 0; i < n; ++i) {
		ll x; ll y;
		cin >> x >> y;
		for (ll j = 0; j < x; ++j) {
			cows.push_back(y);
		}
	}
	sort(cows.begin(), cows.end());
	ll worst = 0;
	ll l = 0; ll r = cows.size() - 1;
	while (l < r) {
		worst = max(worst, cows[l] + cows[r]);
		l++;
		r--;
	}
	
	cout << worst;
	return 0;
}
