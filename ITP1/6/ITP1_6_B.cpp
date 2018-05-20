#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, num;
    char c;
    array<array<int, 13>, 4> card;
    card[0] = {0};
    card[1] = {0};
    card[2] = {0};
    card[3] = {0};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c >> num;
        if(c == 'S') card[0][num-1] = 1;
        else if(c == 'H') card[1][num-1] = 1;
        else if(c == 'C') card[2][num-1] = 1;
        else if(c == 'D') card[3][num-1] = 1;
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            if(card[i][j] == 0){
                switch(i){
                    case 0:
                        printf("S %d\n", j+1);
                        break;
                    case 1:
                        printf("H %d\n", j+1);
                        break;
                    case 2:
                        printf("C %d\n", j+1);
                        break;
                    case 3:
                        printf("D %d\n", j+1);
                        break;
                }
            }
        }
    }
    return 0;
}
