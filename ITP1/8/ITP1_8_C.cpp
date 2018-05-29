#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    int a[26] = {0};
    while(cin >> s){
        for(int i = 0; i < s.size(); i++){
            a[tolower(s[i]) - 'a']++;
        }
    }
    for(int i = 0; i < 26; i++){
        printf("%c : %d\n", i + 'a', a[i]);
    }
    return 0;
}
