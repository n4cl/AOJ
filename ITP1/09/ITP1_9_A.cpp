#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string p, s;
    int ans = 0;
    cin >> p;

    transform(p.begin(), p.end(), p.begin(), ::tolower);
    while(1){
        cin >> s;
        if(s == "END_OF_TEXT") break;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(s == p) ans++;
    }
    cout << ans << endl;
    return 0;
}
