#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i<=high; i++){
        /* i - low is to shift the indices, so that the 
        first element of temp (at index 0) gets written back into arr[low]. */
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int> &arr, int low, int high){  // reference of arr cz of need of having modified array later.
    if(low >= high) return;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int x;
        cin >>x;
        arr.push_back(x);
    }
    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

/*
I/P:
9
14 9 15 12 6 8 13 10 11
*/

/*
T.C. : O(nlogn) for all cases.
S.C. : O(n)
*/