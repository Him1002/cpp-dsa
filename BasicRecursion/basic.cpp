#include<bits/stdc++.h>
using namespace std;

void nTimesName(int i, int n){
    if(i>n) return;

    cout << "Him" << " ";
    nTimesName(i+1,n);
}

void print1ton(int i,int n){
    if(i>n) return;

    cout << i << " ";
    print1ton(i+1,n);
}

void print1ton_BT(int i, int n){
    if(i<1) return;

    print1ton_BT(i-1,n);                //Back Tracking
    cout << i << " ";
}
void printNto1(int i, int n){
    if(i<1) return;

    cout << i << " ";
    printNto1(i-1,n);
}

void printNto1_BT(int i, int n){
    if(i>n) return;

    printNto1_BT(i+1,n);                // Back Tracking
    cout << i << " ";
}

int main(){
    int n;
    cin >> n;
    // nTimesName(1,n);
    // printNto1(n,n);
    // printNto1_BT(1,n);
    print1ton_BT(n,n);
    return 0;
}


/*
Time Comp.  : O(n)
Space Comp. : O(n)
*/