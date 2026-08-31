#include <vector>
#include <iostream>
#include <algorithm>
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
	
	int total = 0;
	for (int i = 0; i <= 2*n-3; i += 2) {
		total += abs(weights[i] - weights[i+1]); 
		
	}
	
	int total2 = 0;
	for (int i = 1; i <= 2*n-2; i += 2) {
		total2 += abs(weights[i] - weights[i+1]); 
		
	}

	total = min(total, total2);
	cout << total;
}

