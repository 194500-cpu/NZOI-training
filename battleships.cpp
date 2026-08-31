#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<vector<char>> grid(10, vector<char> (10));
	unordered_map<char, int> counter = {
		{'a', 1},
		{'b', 2},
		{'c', 3},
		{'d', 4},
		{'e', 5},
		{'f', 6}
		};
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			char input;
			cin >> input;
			grid[i][j] = input;
		}
	}
	int coord1 = 0;
	int coord2 = 0;
	cin >> coord1 >> coord2;
	while (coord1 != -1) {
		char location = grid[coord2][coord1];
		if (location == '#') {
			cout << "Miss" << "\n";
		}
		else {
			counter[location] -= 1;
			if (counter[location] == 0) {
				cout << "Sunk " << location << "\n";
			} else {
				cout << "Hit " << location << "\n";
			}
		}
		cin >> coord1 >> coord2;
	}
	
	
	
	
	return 0;
}
