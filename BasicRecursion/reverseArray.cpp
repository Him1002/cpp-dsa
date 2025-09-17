#include<bits/stdc++.h>
using namespace std;

//two variable
void revarray(int left, int arr[], int right){
    if(left >= right) return;
    swap(arr[left],arr[right]);

    revarray(left+1, arr, right-1);
}

// One Varaable
void revArray(int i, int arr[], int n){
    if(i>=n/2) return;

    swap(arr[i], arr[n-i-1]);

    revArray(i+1, arr, n);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++) cin >> arr[i];
    // revArray(0, arr, n);
    revarray(0,arr,n-1);
    
    for(int i=0; i<n; i++) cout << arr[i]  << " ";
    return 0;
}

