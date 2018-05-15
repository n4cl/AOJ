#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int sec, h, m, s;
    cin >> sec;
    s = sec % 60;
    m = sec / 60 % 60;
    h = sec / 3600;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
