#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int minim = INT_MAX;
	int n;
	cin >> n;
	vector<int> weights(2*n);
	for (int &item : weights) {
		cin >> item;
	}
	
	sort(weights.begin(), weights.end());
	
	for (int i = 0; i < 2*n-1; ++i) {
		for (int j = i + 1; j < 2*n; ++j) {
			vector<int> templist;
			for (int h = 0; h < 2*n; ++h) {
				if (h != j && h != i){
					templist.push_back(weights[h]);
				}				
			}
			int instabil = 0;
			for (int g = 0; g < 2*n - 2; g+=2) {
				instabil += templist[g+1] - templist[g];
			}
			minim = min(instabil, minim);
		}
	}
	cout << minim;
}







