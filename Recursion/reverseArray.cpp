#include<bits/stdc++.h>
using namespace std;

// two pointer approch
void reverseArray(int l, int r, int arr[]) {
    if(l >= r) return;
    swap(arr[l], arr[r]);
    reverseArray(l+1, r-1, arr);
    return;
}

// single pointer
void reverse(int i, int arr[], int n) {
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverse(i+1, arr, n);

    return;
}
int main() {

    cout << "Enter the size of array: ";
    int n;
    cin >> n;

    int arr[n];

    // take the input & insert into the array
    for(int i = 0; i < n; i++) cin >> arr[i];

    // reverseArray(0, n-1, arr);
    reverse(0, arr, n);

    for(int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}