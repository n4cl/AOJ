#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b, c;
    string ans;
    cin >> a >> b >> c;
    if(a < b && b < c) ans = "Yes";
    else ans = "No";
    cout << ans << endl;
    return 0;
}
