#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int w, h, x, y, r;
    string ans;
    cin >> w >> h >> x >> y >> r;

    if(x + r <= w && x - r >= 0 && y + r <= h && y - r >= 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
