#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m, l;
    long  input, total;
    cin >> n >> m >> l;
    array<array<long, 100>, 100> a;
    array<array<long, 100>, 100> b;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> input;
            a[i][j] = input;
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < l; j++){
            cin >> input;
            b[i][j] = input;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            total = 0;
            for(int k = 0; k < m; k++){
                total += a[i][k] * b[k][j];
            }
            if(j == l - 1) printf("%ld", total);
            else printf("%ld ", total);
        }
        printf("\n");
    }

    return 0;
}
