#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int h, w;
    string s;
    while(1){
        cin >> h >> w;
        if(h == 0 && w == 0) break;
        s = "";
        for(int i = 0; i < w; i++){
            s += '#';
        }
        for(int i = 0; i < h; i++){
            cout << s << endl;
        }
        cout << endl;
    }
    return 0;
}
