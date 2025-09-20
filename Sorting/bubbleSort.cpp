#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int n, int arr[]){
    for(int i = n-1; i>=1; i--){
        int didSwap = 0;
        for(int j = 0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                didSwap = 1;   
            }
            
        }
        // to check how many times loop iterate if there is zero swap in first iteration
        cout << "run" << endl; 
        if(didSwap == 0){   
            // if no swap in first iteration then no need to iterate ahead.
            break;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    bubbleSort(n,arr);
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
}

/*
I/P:
6
13 46 24 52 20 9

6
1 2 3 4 5 6
*/

/*
T.C. : O(n) for Worst and Avg case.
       O(1) for Best case.
*/