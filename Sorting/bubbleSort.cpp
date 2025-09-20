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

void recBubbleSort(int n,int arr[]){
    if(n == 1) return;

    for(int j = 0; j <= n-2; j++){
        if(arr[j] > arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
    recBubbleSort(n-1, arr);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    recBubbleSort(n,arr);
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}

/*
I/P:
6
13 46 24 52 20 9

6
1 2 3 4 5 6
*/

/* For Bubble Sort:
T.C. : O(n) for Worst and Avg case.
       O(1) for Best case.
S.C. : O(1)
*/

/* For Recursive Bubble Sort:
Time Complexity: O(N^2) for the worst and average cases 
                and O(N) for the best case. 
                Here, N = size of the array.

Space Complexity: O(N) auxiliary stack space.
*/        
