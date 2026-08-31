#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	freopen("hps.in", "r", stdin);
	freopen("hps.out", "w", stdout);
	
	int n;
	cin >> n;
	vector<int> H_sum(n + 1, 0);
	vector<int> P_sum(n + 1, 0);
	vector<int> S_sum(n + 1, 0);
	vector<char> input(n);
	for (char &chosen : input) {
		cin >> chosen;
	}
	for (int i = 1; i <= n; ++i) {
		char curr = input[i-1];
		if (curr == 'H') {
			H_sum[i] = H_sum[i - 1] + 1;
		} else {
			H_sum[i] = H_sum[i - 1];
		}
		if (curr == 'P') {
			P_sum[i] = P_sum[i - 1] + 1;
		} else {
			P_sum[i] = P_sum[i - 1];
		}
		if (curr == 'S') {
			S_sum[i] = S_sum[i - 1] + 1;
		} else {
			S_sum[i] = S_sum[i - 1];
		}
	}
	
	int highest = 0;
	for (int i = 1; i <= n; ++i) {
		//~ highest = max({H_sum[i] + P_sum[n] - P_sum[i-1], H_sum[i] + S_sum[n] - S_sum[i-1],P_sum[i] + H_sum[n] - H_sum[i-1], P_sum[i] + S_sum[n] - S_sum[i-1],S_sum[i] + P_sum[n] - P_sum[i-1], S_sum[i] + H_sum[n] - H_sum[i-1], highest});
		highest = max({
        H_sum[i] + P_sum[n] - P_sum[i],
        H_sum[i] + S_sum[n] - S_sum[i],

        P_sum[i] + H_sum[n] - H_sum[i],
        P_sum[i] + S_sum[n] - S_sum[i],

        S_sum[i] + H_sum[n] - H_sum[i],
        S_sum[i] + P_sum[n] - P_sum[i],

        highest
    });
	}
	cout << highest;
}
