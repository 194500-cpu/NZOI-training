#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	set<int> numbers;
	for (int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		numbers.insert(temp);
	}
	cout << numbers.size();
	
}

//~ AC
