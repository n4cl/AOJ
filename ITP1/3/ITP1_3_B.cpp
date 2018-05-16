#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, cnt;
    n = -1;
    cnt = 0;
    while(1){
        cin >> n;
        cnt++;
        if(n==0) break;
        printf("Case %d: %d\n", cnt, n);
    }
    return 0;
}
