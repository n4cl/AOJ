#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b;
    string ans;
    cin >> a >> b;
    if(a > b) ans = "a > b";
    else if(a < b) ans = "a < b";
    else ans = "a == b";
    cout << ans << endl;
    return 0;
}
