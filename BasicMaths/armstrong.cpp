#include<bits/stdc++.h>
using namespace std;

int countPower(int num){
    if(num==0) return 1;    // for num= 0 
    int count = 0;
    while(num>0){
        num = num / 10;
        count++;
    }
    return count;
}
bool isArmstrong(int num){
    int dupl = num;
    int sum = 0;
    int digitcount = countPower(num);
    while(num>0){
        int digit = num % 10;
        sum = sum + pow(digit,digitcount);
        num = num / 10;
    }
    
    // if(sum == dupl) cout << true;
    // else cout << false;
    return dupl == sum;
}

int main(){
    int num;
    cin >> num;
    if(isArmstrong(num)) cout << "yes";
    else cout << "no";
    return 0;
    
}