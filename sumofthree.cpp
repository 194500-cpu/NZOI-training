//~ #include <bits/stdc++.h>
//~ using namespace std;

//~ int main() {
	//~ int n; int x;
	//~ cin >> n >> x;
	//~ vector<int> inputarray(n);
	//~ for (int &item : inputarray) {
		//~ cin >> item;
	//~ }
	//~ sort(inputarray.begin(), inputarray.end());
	//~ int l = 0; int r = inputarray.size() -	1;
	//~ bool run = true; bool found = false;
	//~ while (run && r != l) {
		//~ int current = inputarray[l] + inputarray[r];
		//~ int remaining = x - current;
		//~ if (remaining <= 0) {
			//~ --r;
		//~ } else if (remaining > 0) {
			//~ for (int i = 0; i < n; ++i) {
				//~ if (remaining + inputarray[i] == x && i != r && i != l) {
					//~ cout << l + 1 << " " << r + 1 << " " << i + 1;
					//~ run = false;
					//~ found = true;
					
					//~ break;
				//~ }
			//~ }
			//~ ++l;
		//~ }
	//~ }
	//~ if (found != true) {
		//~ cout << "IMPOSSIBLE";
	//~ }
//~ }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<pair<int,int>> inputarray(n);

    for (int i = 0; i < n; ++i) {
        cin >> inputarray[i].first;
        inputarray[i].second = i + 1;
    }

    sort(inputarray.begin(), inputarray.end());

    int l = 0;
    int r = inputarray.size() - 1;

    bool run = true;
    bool found = false;

    while (run && r != l) {
        int current = inputarray[l].first + inputarray[r].first;
        int remaining = x - current;

        if (remaining <= 0) {
            --r;
        } else {
            for (int i = 0; i < n; ++i) {
                if (remaining + inputarray[i].first == x &&
                    i != r && i != l) {

                    cout << inputarray[l].second << " "
                         << inputarray[r].second << " "
                         << inputarray[i].second;

                    run = false;
                    found = true;
                    break;
                }
            }

            ++l;
        }
    }

    if (!found) {
        cout << "IMPOSSIBLE";
    }
}
