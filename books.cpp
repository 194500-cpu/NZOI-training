#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
	ll n; ll t;
	cin >> n >> t;
	vector<ll> books(n);
	for (ll &item : books) {
		cin >> item;
	}
	
	ll left = 0; ll best = 0; ll sum = 0; ll amount = 0;
	for (ll right = 0; right < n; ++right) {
		sum += books[right];
		amount += 1;
		while (sum > t) {
			sum -= books[left];
			++left;
			amount -= 1;
			}
		best = max(amount, best);
			
	}
	cout << best;
	
}
