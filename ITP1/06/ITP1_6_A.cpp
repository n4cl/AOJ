#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, a;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    reverse(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i];
        if(i != n-1) cout << ' ';
        else cout << endl;
    }
    return 0;
}
