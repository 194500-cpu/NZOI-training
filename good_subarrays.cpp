#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ll t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		ll length;
		cin >> length;
		string input;
		cin >> input;
		vector<ll> prefixSum(length+1, 0);
		for (int g = 1; g <= length; ++g) {
			prefixSum[g] = prefixSum[g-1] + input[g-1] - '0';
		}
		ll count = 0;
		for (int h = 1; h <= length; ++h) {
			for (int j = h; j <= length; ++j)
			if (prefixSum[j] - prefixSum[j-h] == h) {
				++count;
			}
			
		}
		cout << count << "\n";
		
	}
	return 0;
}


