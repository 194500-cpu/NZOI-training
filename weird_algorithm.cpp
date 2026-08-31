#include <vector>
#include <iostream>
using namespace std;

typedef long long = ll;

int main() {
	ll n = 0;
	cin >> n;
	vector<ll> sequence;
	sequence.push_back(n);
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
			sequence.push_back(n);
		}
		else {
			n *= 3;
			n += 1;
			sequence.push_back(n);
		}
	}
	for (ll &number : sequence) {
		cout << number << " ";
	}
}
