#include<bits/stdc++.h>
using namespace std;

void gcd(int num1, int num2){
    //int gcd =1;
    // for(int i = 1; i <= min(num1, num2); i++){
    //     if (num1%i == 0 && num2%i == 0){
    //         gcd = i;
    //     }
    // }
    // cout << gcd;
    while(num1>0 && num2>0){
        if(num1 > num2) num1 = num1%num2;
        else num2 = num2%num1;
    }
    if(num1==0)cout << num2;
    
    else cout << num1;
    
}

int main(){
    int num1,num2;
    cin >> num1 >> num2;
    gcd(num1,num2);
    return 0;
}