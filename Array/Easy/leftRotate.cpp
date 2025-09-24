#include<bits/stdc++.h>
using namespace std;

void leftRotateBy1(int arr[], int n){
    int temp = arr[0];
    for(int i = 1; i<n; i++){
       arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
// T.C. : O(N)
// S.C. : O(1)
}

//Brute Force:
void leftRotateByd(int arr[], int n, int d){
    
    // transfer d in range of (0,n)
    d = d % n;

    // temp store first d elemenent
    int temp[d];
    for(int i = 0; i<d; i++){
        temp[i] = arr[i];
    }

    // shifting d to n-1 index to 0 to n-d
    for(int i = d; i<n; i++){
        arr[i-d] = arr[i];
    }
    
    // storing back from temp
    for(int i=n-d; i<n; i++){
        arr[i] = temp[i - n-d];
    }

// T.C. : O(d)+O(n-d) + O(d) = O(n + d)
// S.C. : O(d)
}


//  Optimal
void reversearray(int arr[], int start, int end){
    int l = start;
    int r = end;

    while(l<r){
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}
void leftRotateByd_opt(int arr[], int n, int d){

    // transfer d in range of (0,n)
    d = d % n;

    // reverse(arr,arr+d);
    reversearray(arr,0,d-1); // ------> O(d)

    // reverse(arr+d, arr+n);
    reversearray(arr, d, n-1); // ----> O(n-d)

    // reverse(arr,arr+n);
    reversearray(arr, 0,n-1); // -----> O(n)

// T.C. : O(2N) ~= O(N)
// S.C. : O)(1) ( no xtra space)
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int d;
    cin >> d;
    // leftRotateBy1(arr,n);
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }

    leftRotateByd_opt(arr,n,d);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // reversearray(arr,0,n-1);
    // for(int i=0; i<n; i++){
    //     cout<< arr[i] << " ";
    // }
    return 0;
}

/*
I/P:
5
1 1 2 2 2
12

5
1 1 2 2 2
2
*/