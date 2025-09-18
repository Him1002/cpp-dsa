#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    //precompute:
    int hash[26] = {0};
    for(int i = 0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }
    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        //fetch:
        cout << hash[ch - 'a'] << endl;
    }
}

/*
I/P:
abcdabegh
5
a
d
f
b
z
*/