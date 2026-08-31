#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n; ll x;
	cin >> n >> x;
	vector<pair<ll, ll>> nums(n);
	for (ll z = 0; z < n; ++z) {
		ll temp;
		cin >> temp;
		nums[z].first = temp;
		nums[z].second = z + 1;
	}
	sort(nums.begin(), nums.end());
	
	for (ll i = 0; i < n -2; ++i) {
		ll current = nums[i].first;
		ll l = i + 1;
		ll r = n -1;
		ll sum = nums[l].first + nums[r].first;
		ll needed = x - current;
		while (l < r) {
				if (sum > needed) {
					r--;
					sum = nums[l].first + nums[r].first;
				} else if (sum < needed) {
					l++;
					sum = nums[l].first + nums[r].first;
				} else {
					cout << nums[l].second << " " << nums[i].second << " " << nums[r].second;
					return 0;
				}
			
		}
	}
	cout << "IMPOSSIBLE";
	return 0;
}
