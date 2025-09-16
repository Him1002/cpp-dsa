#include<bits/stdc++.h>
using namespace std;

void explainMap(){
    map<int, int> mpp;

    mpp[1] = 2;

    mpp.insert({3,1});

    mpp.emplace(2,3);

    for(auto it :mpp){
        cout << it.first << " " << it.second << endl;
    }

    auto it = mpp.find(2);
    cout << (*it).second << endl; 

    auto it1 = mpp.find(4);
    cout << (*it1).second;
}

int main(){
    explainMap();

    return 0;
}