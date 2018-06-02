#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m, input;
    cin >> n >> m;
    vector<vector<int>> a;
    vector<int> b;
    a.resize(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> input;
            a[i].push_back(input);
        }
    }
    for(int i = 0; i < m; i++){
        cin >> input;
        b.push_back(input);
    }
    for(int i = 0; i < n; i++){
        int ans = 0;
        for(int j = 0; j < m; j++){
            ans += a[i][j] * b[j];
        }
        cout << ans << endl;
    }

    return 0;
}
