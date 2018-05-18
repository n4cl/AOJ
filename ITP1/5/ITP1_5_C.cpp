#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int h, w;
    string s;
    while(1){
        cin >> h >> w;
        if(h == 0 && w == 0) break;
        for(int i = 0; i < h; i++){
            s = "";
            for(int j = 0; j < w; j++){
                if((i + j) % 2 == 0){
                    s += '#';
                }else{
                    s += '.';
                }
            }
            cout << s << endl;
        }
        cout << endl;
    }
    return 0;
}
