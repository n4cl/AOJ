#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int x, y;
    while(1){
        cin >> x >> y;
        if(x == 0 && y == 0) break;
        if(x > y) swap(x, y);
        printf("%d %d\n", x, y);
    }
    return 0;
}
