#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; int k;
	cin >> n >> k;
	vector<int> diamonds(n);
	for (int &v : diamonds) {
		cin >> v;
	}
	
	sort(diamonds.begin(), diamonds.end());
	int left = 0;
	int right = 1;
	int pairs = 0;
	while (right < diamonds.size()) {
		int first = diamonds[left];
		int second = diamonds[right];
		int difference = abs(first - second);
		if (difference > k) {
			left++;
			right++;
			continue;
		}
		pairs++;
		right += 2;
		left += 2;	
	}
	
	cout << pairs;
}
