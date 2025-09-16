#include<bits/stdc++.h>
using namespace std;

void allDiv(int num){
    // for(int i = 1; i <=36 ; i++){       // Takes O(num) time
    //     if(num%i == 0) cout << i << " ";
    // }
    vector<int> ls;
    for(int i = 1; i*i<=num; i++){
        if(num % i == 0){
            ls.push_back(i);
            //cout << i << " ";
            if( num/i != i ){ 
                ls.push_back(num/i);
                //cout << num/i << " ";
            }
        }
    }
    sort(ls.begin(), ls.end());

    for(auto it : ls){
        cout << it << " ";
    }
}


int main(){
    int num;
    cin >> num;
    allDiv(num);
    return 0;
}