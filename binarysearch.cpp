#include <vector>
#include <iostream>
using namespace std;


long long binary_search(long long target, vector<long long> nums) {
	long long right = nums.size() - 1;
	long long left = 0;
	sort(nums.begin(), nums.end());
	long long middle;
	while (left <= right) {
		middle = left+ (right - left) / 2;
		if (nums[middle] == target) {
			return middle;
		} else if (nums[middle] < target) {
			left = middle +1;
		} else {
			right = middle-1;
		}
	}
	return -1;
}





int main() {
	vector<long long> nums = {1,3,2,5,1,49,12,40,1,491,40,39,149,36,468,2485,928};
	cout << binary_search(491, nums);
	
}
