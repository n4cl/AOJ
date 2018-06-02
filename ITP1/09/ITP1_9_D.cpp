#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s, temp, cmd, rep;
    int n, begin, end;
    cin >> s >> n;

    for(int i = 0; i < n; i++){
        cin >> cmd;
        if(cmd == "replace"){
            cin >> begin >> end >> rep;
            for(int j = 0; j < rep.size(); j++){
                s[begin + j] = rep[j];
            }
        }
        else if(cmd == "reverse"){
            cin >> begin >> end;
            temp = s;
            for(int j = 0; j < end - begin + 1; j++){
                s[begin + j] = temp[end - j];
            }
        }
        else if(cmd == "print"){
            cin >> begin >> end;
            for(int j = begin; j < end + 1; j++){
                cout << s[j];
            }
            cout << endl;
        }
    }
    return 0;
}
