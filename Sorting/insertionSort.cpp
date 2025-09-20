#include<bits/stdc++.h>
using namespace std;

void insertionSort(int n, int arr[]){
    for(int i = 0; i <= n-1; i++){
        int j = i;
        while( j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}

void recInsertionSort(int n, int i, int arr[]){
    if(i==n) return;

    int j = i;
    while (j > 0 && (arr[j-1] > arr[j])){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;

        j--;
    }
    recInsertionSort(n, i+1, arr);
    
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    // insertionSort(n,arr);
    recInsertionSort(n,0,arr);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

/*
I/P:
7
14 9 15 12 6 8 13

5
1 2 3 4 5
*/

/* For Insertion Sort:
T.C : O(n^2) for Worst case & Avg. Case
      O(n)  for Best Case

S.C.: O(1)
*/

/*
T.C. : O(n^2) for Worst case & Avg. Case
       O(n)  for Best Case

S.C. :  O(n) auxiliary stack space.
*/