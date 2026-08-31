#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(false);
	//~ cin.tie(nullptr);
	ll n; ll q;
	cin >> n >> q;
	vector<ll> numbers(n);
	for (ll &item : numbers) {
		cin >> item;
	}
	ll sum = 0;
	vector<ll> prefixSum = {0};
	for (ll &item : numbers) {
		sum += item;
		prefixSum.push_back(sum);
	}
	
	for (ll i = 0; i < q; i++) {
		ll s; ll f;
		cin >> s >> f;
		cout << prefixSum[f] - prefixSum[s] << "\n";
	}
	
}
