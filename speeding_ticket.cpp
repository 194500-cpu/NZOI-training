#include <iostream>
#include <vector>
using namespace std;

int main() {
	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);
	
	vector<int> limits;
	int n, m;
	
	cin >> n >> m;
	int current = 0;
	int length, limit = 0;
	for (int i = 0; i < n; ++i) {
		
		cin >> length >> limit;
		for (int k = current; k < current + length; ++k) {
			limits.push_back(limit);
		}
		current += length;
	}
	current = 0;
	int highest = 0;
	for (int i = 0; i < m; ++i) {
		int dist, spd;
		cin >> dist >> spd;
		for (int j = current; j < current + dist; ++j) {
			if (spd > limits[j]) {
				highest = max(highest, spd - limits[j]);
			}
		}
		current += dist;
	}
	cout << highest;
}
