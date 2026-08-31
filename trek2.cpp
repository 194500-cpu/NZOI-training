#include <iostream>
using namespace std;
using ll = long long;




int main() {
	vector<ll> nums = {1,3,4,5,6,10,29,300};
	ll target = 33;
	
	
	//code
	sort(nums.begin(), nums.end());
	ll l = 0;
	ll r = nums.size() - 1;
	
	while (l != r) {
		ll curr = nums[l] + nums[r];
		if (curr == target) {
			cout << nums[l] << " " << nums[r] << "\n";
			break;
		}
		if (curr < target) {
			l += 1;
		} else{
			r -= 1;
		}
	}
}
