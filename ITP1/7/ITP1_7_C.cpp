#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int r, c, input, total;
    cin >> r >> c;
    array<array<int, 100>, 100> matrix;

    for(int i = 0; i < r; i++){
        total = 0;
        for(int j = 0; j < c; j++){
            cin >> input;
            matrix[i][j] = input;
            total += input;
            printf("%d ", input);
        }
        matrix[i][c+1] = total;
        printf("%d\n", total);
    }

    for(int i = 0; i < c; i++){
        total = 0;
        for(int j = 0; j < r; j++){
            total += matrix[j][i];
        }
        matrix[r+1][i] = total;
        printf("%d ", total);
    }

    total = 0;
    for(int i = 0; i < c; i++){
        total += matrix[r+1][i];
    }
    printf("%d\n", total);
    return 0;
}
