#include <vector>
#include <iostream>
using namespace std;

using ll = long long;

int main() {
	ll t;
	cin >> t;
	for (ll i = 0; i < t; ++i) {
		ll n; ll m;
		cin >> n >> m;
		vector<ll> remainder(n);
		for (ll input = 0; input < n; ++input) {
			ll item;
			cin >> item;
			remainder[input] = item % m;
		}
		for (ll j = 0; j < n; ++j) {
			
		}
		
	}
}
