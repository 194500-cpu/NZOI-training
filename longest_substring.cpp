//~ #include <iostream>
//~ #include <vector>
//~ #include <string>
//~ #include <unordered_map>
//~ #include <algorithm>
//~ using namespace std;

//~ int main() {
	//~ int n;
	//~ cin >> n;
	//~ unordered_map<char, int> counter;
	//~ vector<char> line(n);
	//~ string input;
	//~ cin >> input;
	//~ for (int i = 0; i < n; ++i) {
		//~ line[i] = input[i];
	//~ }
	
	//~ int l = 0; int r = 0;
	//~ int currentlength = 0; int best = 0;
	//~ while (r < n) {
		//~ if (counter[line[r]] == 0) {
			//~ counter[line[r]] = 1;
			//~ r++;
			//~ currentlength += 1;
		//~ } else {
			//~ counter[line[l]] = 0;
			//~ l++;
			//~ currentlength = r - l;
		//~ }
		//~ best = max(best, currentlength);
	//~ }
	//~ cout << best;
	
//~ }

DOESNT WORK
