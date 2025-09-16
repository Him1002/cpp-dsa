#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    int count = 0;
    // for(int i = 1; i<=num; i++){
    //     if (num%i == 0)count++;
    // }
    // if(count == 2) return true;
    // else return false;

    for(int i = 1; i*i <=num; i++){
        if(num%i == 0){
            count++;
            if(num/i != i){
                count++;
            }
        }
    }
    if(count == 2) return true;
    else return false;
}

int main(){
    int num;
    cin >> num;
    if(isPrime(num)) cout << "true";
    else cout << "false";
    return 0;
}