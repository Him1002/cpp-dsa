#include<bits/stdc++.h>
using namespace std;

//Brute Force( works with duplicate elements too)
int secondLargestEle(int arr[], int n){
    int slargest;
    sort(arr, arr+n);
    int largest = arr[n-1];
    for(int i = n-2; i>=0; i--){
        if(arr[i] != largest){
            slargest = arr[i];
            break;
        }
    }
    return slargest;

// T.C. = O(NlogN) + O(N) --->Worst case  {1,7,7,7,7}
}

int secondLargestEle_btr(int arr[], int n){
    //first pass ---> find largest
    int largest = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    //second pass ---> initialize slargest and find larger than it but not largest.
    int slargest = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
    }
    return slargest;

// T.C. : O ( N + N)  --> O(2N)
}

int secondLargestEle_opt(int arr[], int n){
    int largest = arr[0];
    int slargest = -1;

    for(int  i = 1; i<n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if( arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
// T.C. : O(N)
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    // cout << secondLargestEle(arr,n);

    // cout << secondLargestEle_btr(arr,n);

    cout << secondLargestEle_opt(arr,n);
    return 0;
}

/* i/p:
5
1 15 15 1 5 
*/