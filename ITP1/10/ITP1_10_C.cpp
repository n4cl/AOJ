#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    double s[1000];
    double m, a;
    while(1){
        cin >> n;
        m = 0;
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            cin >> s[i];
            m += s[i];
        }
        m /= n;
        a = 0;
        for(int i = 0; i < n; i++){
            a += pow(s[i] - m, 2);
        }
        a = sqrt(a / n);
        printf("%f\n", a);
    }
    return 0;
}
