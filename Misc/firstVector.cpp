#include<bits/stdc++.h>
using namespace std;

int main(){

    // vector <int> v;
    // v.push_back(1);

    //cout << v[0];

    // v.emplace_back(2);
    //cout << v[0] << " " << v[1];
    //cout << v.size();

    vector <int> v1(5, 100);
    v1.emplace_back(50);

    vector <int> v2(v1);
    //cout << v2[4];
    v2[0] = 10;
    vector<int> :: iterator it = v2.begin();
    //cout << *it; 
    for(auto it = v2.begin() ;it != v2.end() ;it++){
        cout << *it << " ";
        
    }
    cout << endl;

    for(auto it : v1){
        cout << it << " ";
    }
}