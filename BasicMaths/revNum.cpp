#include<bits/stdc++.h>
using namespace std;

void reverseNUm(int num){
    int revNum = 0;

    while(num>0){

        int lastDig = num % 10;
        num = num / 10;
        revNum = (revNum*10) + lastDig;
    }
    cout << revNum;
}

int main(){
    int num;
    cin >> num;
    reverseNUm(num);
}