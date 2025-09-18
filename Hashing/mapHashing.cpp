#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    //Precompute:
    // map<int,int> mpp;

    unordered_map<int,int> mpp;

    //  unordered_map is the first preference
    // as it takes O(1) for Best and Avg Case
    
    for(int i = 0; i<n; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout << it.first << " ->" << it.second << endl;
    }
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << mpp[num] << endl;
    }
    return 0;
}

/*
I/P:
5
1 3 2 1 3
5
1
4
2
3
12
*/