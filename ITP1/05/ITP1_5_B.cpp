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
                if(i == 0 || i == (h-1) || j == 0 || j == (w-1)){
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
