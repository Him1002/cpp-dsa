#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i = 1; i<n; i++){
        if( arr[i] >= arr[i-1]){

        }
        else 
            return false;
    }
    return true;
    
// T.C. : O(N)

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << isSorted(arr,n);
    return 0;
}
/* 
i/p:

5
1 2 2 3 4 

5
1 15 15 1 5 

*/