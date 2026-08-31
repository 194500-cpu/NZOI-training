#include <vector>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	
	int john = 0, jt = 0, mt = 0, mary = 0;
	int lr = 0;
	while (john < n) {
		jt++;
		if (lr == 0) {
			john += a;
			lr = 1;
		} else {
			john += b;
			lr = 0;
		}
		
	}
	lr = 0;
	while (mary < n) {
		mt++;
		if (lr == 0) {
			mary += c;
			lr = 1;
		} else {
			mary += d;
			lr = 0;
		}
		
	}
	cout << -jt + mt;
	
}
