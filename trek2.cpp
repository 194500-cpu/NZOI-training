#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int &v : nums) {cin >> v;}
	int highest = *(max_element(nums.begin(), nums.end()));
	int lowest = *(min_element(nums.begin(), nums.end()));
	cout << highest - lowest;
}

