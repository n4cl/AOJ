#include <bits/stdc++.h>
using namespace std;

int keta(string n){
    int res;
    res = 0;
    for(int i = n.size() - 1; i >= 0; i--){
        res += int(n[i] - '0');
    }
    return res;
}

int main(void) {
    string n;
    while(1){
        cin >> n;
        if(n == "0") break;
        cout << keta(n) << endl;
    }
    return 0;
}
