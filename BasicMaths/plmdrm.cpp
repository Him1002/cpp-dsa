#include<bits/stdc++.h>
using namespace std;

void isPalindrome(int num){
    int revN = 0;
    int orgnl = num;
    while(num>0){
        int lastDig = num % 10;
        num = num / 10;
        revN = (revN*10) + lastDig;
    }
    
    if(revN == orgnl) cout << true;
    else cout << false;

}

int main(){
    int num;
    cin >> num;
    isPalindrome(num);
}
