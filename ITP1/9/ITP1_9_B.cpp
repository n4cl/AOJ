#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    int cnt, inp;

    while(1){
        cin >> s;
        if(s[0] == '-') break;

        cin >> cnt;
        for(int i = 0; i < cnt; i++){
            cin >> inp;
            s = s.substr(inp, s.size() - inp) + s.substr(0, inp);
        }

        cout << s << endl;
    }
    return 0;
}
