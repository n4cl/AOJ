#include <bits/stdc++.h>
using namespace std;

int cnt;

int main(void) {
    int a, b, c;

    cin >> a >> b >> c;
    for(int i = a; i <= b; i++){
        if(c % i == 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
