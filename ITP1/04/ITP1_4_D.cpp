#include <bits/stdc++.h>
using namespace std;

long maxex(vector<long> &vc) {
    long m = -9999999;
    for(int i = 0; i < vc.size(); i++){
        m = max(m, vc[i]);
    }
    return m;
}

long minex(vector<long> &vc) {
    long m = 9999999;
    for(int i = 0; i < vc.size(); i++){
        m = min(m, vc[i]);
    }
    return m;
}

long sum(vector<long> &vc) {
    long total = 0;
    for(int i = 0; i < vc.size(); i++){
        total += vc[i];
    }
    return total;
}


int main(void) {
    long n, a, mx;
    vector<long> v;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    printf("%ld %ld %ld\n", minex(v), maxex(v), sum(v));
    return 0;
}
