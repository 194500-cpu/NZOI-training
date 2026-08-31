#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;


int main() {
	freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);
	ll n; ll k;
	cin >> n >> k;
	vector<ll> dias(n);
	for (ll &v : dias) {
		cin >> v;
	}
	
	sort(dias.begin(), dias.end());
	ll difference = 0;
	ll left = 0;
	ll best = 0;
	vector<ll> bestbefore(n);
	vector<ll> bestafter(n);
	for (ll right = 0; right < dias.size(); ++ right) {
		difference = dias[right] - dias[left];
		if (difference > k) {
			while (difference > k) {
				left++;
				difference = dias[right] - dias[left];
			}	
		}
		best = max(best, right - left + 1);
		bestbefore[right] = best;
	}
	best = 0;
	ll right = n-1;
	for (ll left = n-1; left >= 0; --left) {
		difference = - dias[left] + dias[right];
		if (difference > k) {
			while (difference > k) {
				right--;
				difference = - dias[left] + dias[right];
			}	
		}
		best = max(best, - left + right + 1);
		bestafter[left] = best;
	}
	
	best = 0;
	for (ll i = 1; i < n; ++i) {
		best = max(bestbefore[i-1] + bestafter[i], best);
		
	}
	cout << best;
	
}
