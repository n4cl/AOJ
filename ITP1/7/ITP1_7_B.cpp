#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, x, c, k;
    while(1){
        cin >> n >> x;
        if(n == 0 && x == 0) break;
        c = 0;
        for(int i = 1; i < n + 1; i++){
            for(int j = i + 1; j < n + 1; j++){
                k = x - (i + j);
                if(j < k && k <= n) c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
