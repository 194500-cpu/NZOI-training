#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n;
	cin >> n;
	for (long long h = 0; h < n; ++h) {
		long long l; long long count = 0;
		cin >> l;
		string in;
		cin >> in;

		unordered_map<long long, long long> counter;
		counter[0] = 1;
		vector<long long> prefix(l + 1, 0);
		for (long long i = 1; i <= l; ++i) {
			
			prefix[i] = prefix[i-1] + in[i-1] - '0';
			count += counter[prefix[i]-i];
			counter[prefix[i] - i] += 1;
		}
		cout << count << "\n";
	}

}
