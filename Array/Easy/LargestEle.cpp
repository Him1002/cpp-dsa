#include<bits/stdc++.h>
using namespace std;

// Brute Force
int largestEle(int arr[], int n){
    sort(arr, arr+n);
    int largest = arr[n-1];
    return largest;

//T.C. : O(nlogn)
//S.C. : O(1) ----> Ignorr stack space
}

// Optimal
int largestEle_opt(int arr[], int n){
    int largest = arr[0];

    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;

// T.C. : O(n)
// S.C. : O(1)

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int  i = 0; i<n; i++) cin >> arr[i];

    //cout << largestEle(arr,n);

    cout << largestEle_opt(arr,n);
    return 0;
}

/*
I/P:
5
14 9 15 12 5 
*/