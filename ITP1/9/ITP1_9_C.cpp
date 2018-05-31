#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string t, h;
    int n, tp, hp;
    cin >> n;
    tp = 0;
    hp = 0;

    for(int i = 0; i < n; i++){
        cin >> t >> h;
        if(t == h){
            tp++; hp++;
        }
        else if(t > h){
            tp += 3;
        }
        else if(t < h){
            hp += 3;
        }
    }
    printf("%d %d\n", tp, hp);
    return 0;
}
