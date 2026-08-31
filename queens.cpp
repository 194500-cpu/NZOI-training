#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<bool>> reserved(8, vector<bool> (8, false));

bool check_reserved(const vector<int> placement) {
	for (int i = 0; i < 8; ++i) {
		if (reserved[placement[i]][i] == true) {
			return false;
		}
	}	
	return true;
}

bool check_diagonalR(const vector<int> placement) {
	for (int i = 0; i < 8; ++i) {
		int c = i; int r = placement[i];
		while (c < 7 && r < 7) {
			++c;
			++r;
			if (placement[c] == r) {
				return false;
			
			}
		}
	}
	return true;
}

bool check_diagonalL(const vector<int> placement) {
	for (int i = 0; i < 8; ++i) {
		int c = i; int r = placement[i];
		while (c < 7 && r > 0) {
			++c;
			--r;
			if (placement[c] == r) {
				return false;
			}
			
		}
	}
	return true;
}


int main() {
	string line;
	for (int i = 0; i < 8; ++i) {
		cin >> line;
		for (int j = 0; j < 8; ++j) {
			if (line[j] == '*') {
				reserved[i][j] = true;
			} else {
				reserved[i][j] = false;			}
		}
	}
	vector<int> placement = {0, 1, 2, 3, 4, 5, 6, 7};
	int count = 0;
	do {
		if (!check_reserved(placement)) {
			continue;
		}
		else if (!check_diagonalR(placement)) {
			continue;
		}
		else if (!check_diagonalL(placement)) {
			continue;
		} else {
			++count;
		}
		
	} while (next_permutation(placement.begin(), placement.end()));
	
	cout << count;
	
	return 0;
}
