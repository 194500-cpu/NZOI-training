#include <iostream>
#include <string>


using namespace std;

int main() {
    // p = pounds s = shillings pen = pence
    int p; int s; int pe;
    string dash; string dashtwo; string tag;
    cin >> tag >> p >> dash >> s >> dashtwo >> pe;

    int peToS = pe / 12;
    int peLeft = pe % 12;
    s += peToS;
    int sToP = s / 20 ;
    int sLeft = s % 20;

    cout << "#" << p + sToP << "-" << sLeft << "-" << peLeft;
    

    return 0;
}