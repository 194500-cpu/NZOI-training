#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
typedef long long ll;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll x;
	vector<int> numbers;
	while (cin >> x) {
		numbers.push_back(x);
		if (x == -1) {
			
			break;
		}
		
	}
	for (int item : numbers) {cout << item << " ";}
	cout << "\n";
}
