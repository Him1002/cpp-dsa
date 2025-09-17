#include<bits/stdc++.h>
using namespace std;

int nthFib(int n){
    if(n<=1) return n;

    int last = nthFib(n-1);
    int slast = nthFib(n-2);
    return last+slast;
}

int main(){
    int n;
    cin >> n;

    cout << nthFib(n);
}

/*
T.C. : O(2^n) Exponential 
S.C. : O(n)
*/