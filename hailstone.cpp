#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n;
	cin >> n;
	while (n != 0) {
		long long steps = 0;
		long long track = n;
		while (track != 1) {	
			if (track % 2 == 0) {
				track /= 2;
			} else {
				track = 3*track + 1;
			}
			
			steps += 1;
		}
		cout << steps << "\n";
		
		cin >> n;
		
	}


}
