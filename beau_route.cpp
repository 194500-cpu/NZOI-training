#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <cmath>

using namespace std;

//ideally make a greedy algorithm checking both sides, sees which one is
//farther, then goes there

int main() {
	long long N;
	cin >> N;
	long long current = N / 2;
	long long opt1; long long opt2;
	vector<int> mountainsAvailable(N);
	for (long long i = 1; i <= N; ++i) {
		mountainsAvailable.push_back(i);
	}
	
	cout << current << " ";
	while (size(mountainsAvailable) > 0) {
		opt1 = mountainsAvailable[0];
		opt2 = mountainsAvailable[-1];
		if (abs(N - opt1) > abs(N - opt2)) {
			current = opt1;
			mountainsAvailable.erase(remove(mountainsAvailable.begin(), mountainsAvailable.end(), current), mountainsAvailable.end()); 
			cout << current << " ";
		} else {
			current = opt2;
			mountainsAvailable.erase(remove(mountainsAvailable.begin(), mountainsAvailable.end(), current), mountainsAvailable.end()); 
			cout << current << " ";
		}
	}
	
	
}
