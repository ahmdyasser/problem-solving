#include </usr/local/include/bits/stdc++.h>

typedef long long ll;
using namespace std;
const ll N = 2e5+10;

int freq[30][N], pref[30][N];
int main() {
    string str;
    int q;
    cin >> str >> q;
    
    for (int i = 0; i < str.size(); i++) {
        int char_index = str[i] - 'a';
        freq[char_index][i+1] = 1;
    }
    
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < str.size(); j++) {
            pref[i][j] = pref[i][j-1] + freq[i][j];
        }
    }
    
    return 0;
}


