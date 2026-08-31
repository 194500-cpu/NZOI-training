#include <bits/stdc++.h>
using namespace std;

int n; int m;
vector<vector<int>> cowInfo;
vector<vector<int>> conditionerInfo;
int least = INT_MAX;
vector<int> coolLevel(101);


bool eligible() {
	for (int j = 0; j < n; ++j) {
		int start = cowInfo[j][0];
		int end = cowInfo[j][1];
		int cool = cowInfo[j][2];
		for (int h = start; h <= end; ++h) {
			if (coolLevel[h] < cool) {
				return false;
			}
		}
	}
	return true;
}



void solve(int cost, int index) {
	if (cost >= least) {
		return;
	}
	
	
	
	if (eligible()) {
		least = min(cost, least);
	} 
	
	if (index == m) {
		return;
	}
	
	
	
	solve(cost, index + 1);
	
	for (int i = conditionerInfo[index][0]; i <= conditionerInfo[index][1]; ++i) {
		coolLevel[i] += conditionerInfo[index][2];
	}
	solve(cost + conditionerInfo[index][3], index + 1);
	for (int i = conditionerInfo[index][0]; i <= conditionerInfo[index][1]; ++i) {
		coolLevel[i] -= conditionerInfo[index][2];
	}
	
	
	
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		int si; int ti; int ci;
		cin >> si >> ti >> ci;
		cowInfo.push_back({si, ti, ci});
	}
	for (int j = 0; j < m; ++j) {
		int ai; int bi; int pi; int mi;
		cin >> ai >> bi >> pi >> mi;
		conditionerInfo.push_back({ai, bi, pi, mi});
		
	}
	solve(0, 0);
	cout << least;
}
//~ AC
