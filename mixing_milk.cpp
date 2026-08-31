#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);
	
	int b1l; int b1; int b2l; int b2; int b3l; int b3;
	cin >> b1l >> b1;
	cin >> b2l >> b2;
	cin >> b3l >> b3;
	
	vector<pair<int, int>> buckets = {{b1l,b1}, {b2l, b2}, {b3l, b3}};
	int prev = 0;
	int bucket = 1;
	int left = 0;
	for (int i = 1; i <= 100; ++i) {
		left = buckets[bucket].first - buckets[bucket].second;
		if (left >= buckets[prev].second) {
			buckets[bucket].second += buckets[prev].second;
			buckets[prev].second = 0;
		} else {
			int calculation = abs(left - buckets[prev].second);
			buckets[prev].second -= calculation;
			buckets[bucket].second += calculation;
		}
		prev += 1;
		if (prev == 3) {prev = 0;}
		bucket += 1;
		if (bucket == 3) {bucket = 0;}
	}
	cout << buckets[0].second << "\n" << buckets[2].second << "\n" << buckets[1].second;
}
//~ AC
