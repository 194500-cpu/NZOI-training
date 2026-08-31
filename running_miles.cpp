#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;
		vector<int> milestones(n);
		for (int &item : milestones) {
			cin >> item;
		}
		vector<int> bestLeft(n + 1, 0);
		vector<int> bestRight(n);
		int bestl = 0; int bestr = 0;
		for (int j = 1; j <= n; ++j) {
			bestl = max(bestl, milestones[j - 1] + j);
			bestr = max(bestr, milestones[j - 1] - j);
			bestLeft[j] = bestl;
			bestRight[j] = bestr;
		}
		
	}
	
}
