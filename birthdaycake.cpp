ch#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; int m;
	cin >> n >> m;
	int thick = 0;
	for (int i = 0; i < n; ++i) {
		cin >> thick;
	}
	for (int i = 0; i < m; ++i) {
		cin >> thick;
		}
	cout << n*m + max(n,m) * (thick-1) << " "<< thick * n * m;

}
