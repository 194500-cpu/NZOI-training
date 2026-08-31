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
	long long sum = 0;
	for (auto item : cans) {
		auto pos = lower_bound(wall.begin(), wall.end(), item);
		if (pos <= wall.begin()) {
			sum += abs(item - *pos);
			wall.erase(pos);
		} else if (pos >= wall.end()) {
			sum += abs(item - *(wall.end()-1));
			wall.erase(wall.end()-1);
		} else {
			auto prev_pos = prev(pos);
            if (abs(item - *prev_pos) <= abs(item - *pos)) {
                sum += abs(item - *prev_pos);
                wall.erase(prev_pos);
            } else {
                sum += abs(item - *pos);
                wall.erase(pos);
			}
		}
	}
	cout << sum;
}

//WA
