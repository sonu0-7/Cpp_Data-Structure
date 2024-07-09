#include<iostream>
#include<vector>
using namespace std;

// arr  -> 1,2,1,3,4,3
// freq -> 

int main() {
    int arr[] = {1,2,1,3,4,3};
    vector<int> ans(2,0);

    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> frq(n,0);
    
    for(int i=0;i<n;i++){
        frq[arr[i]]++;
        cout<<frq[arr[i]]<<" ";
        // if(frq[arr[i]]==2){
        //     cout<<frq[arr[i]]<<" ";

        // }
    }
    // cout<<endl;
    // for(int i=0;i<2;i++){
    //     cout<<ans[i]<<" ";
    // }

    return 0;
}