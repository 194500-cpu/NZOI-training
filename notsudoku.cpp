#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int r; int c;
	cin >> r >> c;
	int loc1 = 0; int loc2 = 0;
	vector<vector<int>> matrix(r, vector<int> (c));
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			string input;
			cin >> input;
			if (input == "x") {
				loc1 = i; loc2 = j;
				matrix[i][j] = -1;
			} else {
				matrix[i][j] = stoi(input);
			}
		}
	}
	int sum = (r*(r+1))/2;
	for (int l = 0; l < r; ++l) {
		if (l == loc1) {
			continue;
		} else {
			sum -= matrix[l][loc2];
		}
		
	}
	matrix[loc1][loc2] = sum;
	for (int l = 0; l < r; ++l) {
		string thisrow = "";
		for (int f = 0; f < c; ++f) {
			thisrow += to_string(matrix[l][f]);
			thisrow += " ";
		}
		cout << thisrow << "\n";
	}
	
	
	
}
