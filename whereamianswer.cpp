#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("whereami.in", "r", stdin);
	freopen("whereami.out", "w", stdout);
	unordered_map<string, int> count;
	string input;
	int n;
	cin >> n;
	cin >> input;
	for (int i = 1; i <= n; ++i) {
		count.clear();
		bool found = true;
		for (int j = 0; j <= n - i; ++j) {
			string subset = input.substr(j, i);
			count[subset]++;
			if (count[subset] > 1) {
				found = false;
			}
		}
		
		if (found) {
			cout << i;
			break;
		}
	}
}
