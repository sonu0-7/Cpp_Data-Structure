// Given a vector arr[] sorted in ascending order of n size and an integer x. find if there exists a pair in the array whose absolute difference is exactly x

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n = 5;
    int arr[] = {5,10,15,20,25};
    // if array is not sorted in increasing then do this 
    // sort(arr, arr+n);

    bool found = false;
    
    int i=0; 
    int j=1;

    int x;
    cout<<"Enter the value of x: ";
    cin>>x;

    while(i<n and j<n) {
        if(abs(arr[i] - arr[j]) == x) {
            found = true;
            break;
        } else if(abs(arr[i] - arr[j]) < x) {
            j++;
        } else {
            i++;
        }
    }

    if(found == true ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}