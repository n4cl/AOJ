#include <bits/stdc++.h>
using namespace std;

double dmax(double a, double b) {
    if(a > b) return a;
    return b;
}

int main(void) {
    int n, a[100], b[100];
    double ma = 0, y = 0, mi = 0, c = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        ma += abs(a[i] - b[i]);
        y += pow(abs(a[i] - b[i]), 2);
        mi += pow(abs(a[i] - b[i]), 3);
        c = dmax(c, abs(a[i] - b[i]));
    }
    printf("%f\n%f\n%f\n%f\n", ma, sqrt(y), pow(mi, 1.0 / 3.0), c);
    return 0;
}
