#include <bits/stdc++.h>
using namespace std;

void call(int n){
    int i = 1;
    while(++i <= n){
        int x = i;
        if(x % 3 == 0){
            cout << ' ' << i;
        }else{
            while(x){
                if(x % 10 == 3){
                cout << ' ' << i;
                break;
                }
                x /= 10;
            }
        }
    }
    cout << endl;
}

int main(void) {
    int n;
    cin >> n;
    call(n);
    return 0;
}
