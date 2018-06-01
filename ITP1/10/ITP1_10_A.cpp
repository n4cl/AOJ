#include <bits/stdc++.h>
using namespace std;

int main(void) {
    double x, y, v, w;
    cin >> x >> y >> v >> w;
    if(x == v) printf("%f\n", abs(y - w));
    else if(y == w) printf("%f\n", abs(x - v));
    else printf("%f\n", sqrt(pow(abs(x - v),2) + pow(abs(y - w), 2)));
    return 0;
}
