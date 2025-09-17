#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(int i ,string &s){
    if(i >= s.size()) return true;

    if( s[i] != s[s.size()-i-1]) return false;
    
    return isPallindrome(i+1, s);
}

int main(){
    string s;
    cin >> s;
    // s.lower();

    cout << isPallindrome(0,s);
    return 0;
}

/*
Time Complexity: O(N) { Precisely, O(N/2) as we compare the elements N/2 times and swap them}.

Space Complexity: O(1) 
*/