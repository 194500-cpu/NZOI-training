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
		vector<ll> prefixSum(amount+1, 0);
		for (ll k = 1; k <= amount; ++k) {
			prefixSum[k] = prefixSum[k-1] + remainder[k-1];
		}
		
		ll best = LLONG_MAX;
		for (ll k = 0; k < amount; ++k) {
			ll upper = upper_bound(remainder.begin(), remainder.end(), remainder[k] + modulo/2);
			ll lower = lower_bound(remainder.begin(), remainder.end(), remainder[k] - modulo/2);
			ll sumwithin = prefixSum[upper] - prefixSum[lower];
			ll sumLeft = prefixSum[lower];
			ll sumRight = prefixSum[amount] - prefixSum[upper]
			
		}
	}
}

