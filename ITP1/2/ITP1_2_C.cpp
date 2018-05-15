#include <bits/stdc++.h>
using namespace std;

int main(void) {
    array<int, 3> num;
    int n;
    for(int i=0; i<3; i++){
        cin >> n;
        num[i] = n;
    }
    sort(num.begin(), num.end());
    printf("%d %d %d\n", num[0], num[1], num[2]);
    return 0;
}
