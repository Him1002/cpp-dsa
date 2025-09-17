#include<bits/stdc++.h>
using namespace std;

// Paraneterized 
void sumOfn(int i, int sum){
    if(i<1){
        cout << sum;
        return;
    }
    sumOfn(i-1,sum+i);
}


// Fuctional
int sumofN_fn(int n){
    if(n==0){
        return 0;
    }
    return n + sumofN_fn(n-1);
}

int main(){
    int n;
    cin >> n;
    // sumOfn(n,0);
    cout << sumofN_fn(n);
    return 0;
}

/*
Time Comp.  : O(n)
Space Comp. : O(n)
*/