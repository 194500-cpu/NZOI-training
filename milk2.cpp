#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {
	freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
	
	int X, Y, M, closest = 0;
	cin >> X >> Y >> M;
	
	for (int i = 0; i <= M; ++i) {
		if (i * X > M) {
			break;
		}
		for (int j = 0; j <= M; ++j) {
			int current = (i * X) + (j * Y);
			if (current > M) {
				break;
			}
			closest = max(current, closest);
		}
		
	}
	cout << closest;
}
