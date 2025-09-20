#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {

        // the pointer i will move forward and find the first element that is greater than the pivot.
        while (arr[i] <= pivot && i <= high - 1)
        {

            // needed to add some checks like i <= high-1.
            // Because it might happen that i is standing at high and trying to proceed
            i++;
        }

        // the pointer j will move backward and find the first element that is smaller than the pivot.
        while (arr[j] > pivot && j >= low + 1)
        {

            // needed to add some checks like j >= low+1.
            // Because it might happen that j is standing at low and trying to exceed.
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    quickSort(arr, 0, n-1);

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

/*

I/P:
9
14 9 15 12 5 8 13 10 11

*/

/*
T.C : O(nlogn) ----> Best case & Avg. Case.
      O(n^2) ------> Worst Case ( i/p is alreary sorted in ascending or descending order)

S.C. : O(1) --> no extra space
`      O(n) --> Auxilary stack space
 */