#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<int> weights(n*2);
	
	for (int &item : weights) {
		cin >> item;
	}
	
	sort(weights.begin(), weights.end());
	
	for (int &item : weights) {
		cout << item << "\n";
	}
	
	
	int total = 0;
	for (int i = 0; i <= 2*n-3; i += 2) {
		total += abs(weights[i] - weights[i+1]); 
		
	}
	cout << total;
}
//~ AC
