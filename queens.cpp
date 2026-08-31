#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<pair<int, int>> pairs;
	int k; int n;
	cin >> k >> n;
	
	for (int i = 1; i <=n; ++i) {
		for (int j = 1; j <=n; ++j) {
			if (j == i) {
				continue;
			} else {
				pairs.emplace_back(i, j);
			}
		}
	}
	for (pair item : pairs) {
		cout << item.first << " " << item.second << "\n";
	}
}
