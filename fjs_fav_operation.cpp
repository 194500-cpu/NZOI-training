#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
	ios_base::sync_with_stdio(false);
	//~ cin.tie(nullptr);
	ll t;
	cin >> t;
	for (ll i = 0; i < t; ++i) {
		ll amount; ll modulo;
		cin >> amount >> modulo;
		vector<ll> remainder(amount);
		for (ll j = 0; j < amount; ++j) {
			ll item;
			cin >> item;
			remainder[j] = item % modulo;
		}
		sort(remainder);
		vector<ll> prefixSum;
		
		ll count = 0;
		ll best = LLONG_MAX;
		ll (ll k = 0; k < amount; ++k) {
			count = 0;
			for (ll l = 0; l < amount; ++l) {
				if (l == k) {
					continue;
				}
				count += min(min(abs(remainder[k] - remainder[l]), remainder[l] + (modulo - remainder[k])), modulo - remainder[l] + remainder[k]);
			}
			best = min(best, count);
		}
		cout << best << "\n";
		
	}
}
