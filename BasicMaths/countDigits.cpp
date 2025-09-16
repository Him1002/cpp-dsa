#include<bits/stdc++.h>
using namespace std;

void countDigits(int num){
    // int count = 0;

    // while(num >0){
    //     count++;
    //     num/=10;
    // }
    int count = log10(num) + 1;
    cout << count;
}

int main(){
    int num;
    cin >> num;

    countDigits(num);

}