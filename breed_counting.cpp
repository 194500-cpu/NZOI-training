#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);
	int n; int q;
	cin >> n >> q;
	vector<vector<int>> prefixsum(n+1, {0, 0, 0});
	for (int i = 1; i <= n; ++i) {
		int breed;
		cin >> breed;
		breed -= 1;
		for (int j = 0; j < 3; ++j) {
			if (j == breed) {
				prefixsum[i][j] = prefixsum[i-1][j] + 1;
			} else {
				prefixsum[i][j] = prefixsum[i-1][j];
			}
		}
	}
	for (int k = 0; k < q; ++k) {
		int left; int right;
		cin >> left >> right;
		vector<int> temp;
		for (int l = 0; l < 3; ++l) {
			temp.push_back(prefixsum[right][l] - prefixsum[left-1][l]);
		}
		cout << temp[0] << " " << temp[1] << " " << temp[2] << "\n";
	}
}
