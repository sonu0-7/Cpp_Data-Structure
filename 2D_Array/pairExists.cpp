// Given a vector arr[] sorted in ascending order of n size and an integer x. find if there exists a pair in the array whose sum is exactly x

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int> arr;
    
    int i=0;
    cout<<"Enter the elements in ascending order: ";
    while(n>i) {
        int elements;
        cin>>arr[i];
        i++;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}