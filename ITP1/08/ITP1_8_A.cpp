#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])) printf("%c", toupper(s[i]));
        else if(isupper(s[i])) printf("%c", tolower(s[i]));
        else printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
