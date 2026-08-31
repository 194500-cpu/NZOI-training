#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n;
		int best = 0;
		cin >> n;
		vector<int> sights(n);
		for (int &item : sights) cin >> item;
		vector<int> left(n);
		left[0] = sights[0];
		for (int j = 1; j < n; ++j) {
			left[j] = max(left[j-1], sights[j] + j);
		}
		vector<int> right(n);
		right[n-1] = sights[n-1] - (n - 1);
		
		for (int k = n-2; k >= 0; --k) {
			right[k] = max(right[k + 1], sights[k] - k);
		}
		for (int h = 1; h < n-1; ++h) {
			int temp = sights[h] + left[h-1] + right[h+1];
			best = max(best, temp);
		}
		cout << best << "\n";
	}
	
}
