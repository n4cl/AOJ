#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s, p, ring;
    cin >> s >> p;
    ring = s;
    for(int i = 0; i < p.size() - 1; i++){
        ring += s[i];
    }

    if(ring.find(p) != string::npos) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
