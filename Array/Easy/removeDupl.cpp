#include<bits/stdc++.h>
using namespace std;

// I/P : Sorted order 

//Brute Force 
int removeDuplicate(int arr[], int n){
    
    //first pass ---> to store into set
    set<int> st;
    for(int i = 0; i<n; i++){  //-----> takes O(NlogN) as insertion in set takes logN.
        st.insert(arr[i]);         
    }

    //second pass
    int i = 0;
    for(auto it : st){        //---> can goes upto n if there are unique elements only.
        arr[i] = it;
        i++;
    }
    return i;

// T.C. : O(NlogN) + O(N)
// S.C. : O(N) 
}

// Optimal ----> 2 Pointer 
int removeDuplicate_opt(int arr[], int n){
    int i = 0;
    for(int j = 1; j<n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;

// T.C. : O(N)
// S.C. : O(1)
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    // cout << removeDuplicate(arr,n);

    cout << removeDuplicate_opt(arr,n);
    return 0;
}

/*
i/p:
3
1 4 4 4 
*/
