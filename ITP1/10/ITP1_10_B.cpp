#include <bits/stdc++.h>
using namespace std;
double PI = acos(-1);

int main(void) {
    double a, b, c, rad, s;
    cin >> a >> b >> c;
    rad = c * PI / 180;
    s = 1.0 / 2.0 * a * b * sin(rad);
    printf("%f\n", s);
    printf("%f\n", a + b + sqrt(pow(a, 2) + pow(b, 2) - 2.0 * a * b * cos(rad))) ;
    printf("%f\n", 2.0 * s / a);
    return 0;
}
