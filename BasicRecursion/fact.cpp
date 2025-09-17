#include<bits/stdc++.h>
using namespace std;

//Parameterized
void fact__p(int i, int fact){
    if(i==0){
        cout << fact;
        return;
    }
    fact__p(i-1, fact*i);
}

// Fuctional
int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int n;
    cin >> n;
    fact__p(n,1);
    // cout << fact(n);
}

/*
Time Comp.  : O(n)
Space Comp. : O(n)
*/