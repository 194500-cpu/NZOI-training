#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n;
	cin >> n;
	vector<long long> wall(n);
	vector<long long> cans(n);
	for (long long &v : wall) {
		cin >> v;
	}
	for (long long &v : cans) {
		cin >> v;
	}
	sort(wall.begin(), wall.end());
	sort(cans.begin(), cans.end());
	long long sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += abs(wall[i] - cans[i]);
	}
	cout << sum;
}
