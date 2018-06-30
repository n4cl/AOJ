#include <bits/stdc++.h>
using namespace std;

int search(int s[], int s_size, int key) {
    int i = 0;
    s[s_size] = key;
    while(s[i] != key){
        i++;
    }
    return i != s_size;
}

int main(void) {
    // 配列のサイズは、番兵分を確保している
    int n, q, s[10000+1], t, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> t;
        if(search(s, n, t)) ans++;
    }
    cout << ans << endl;
    return 0;
}
