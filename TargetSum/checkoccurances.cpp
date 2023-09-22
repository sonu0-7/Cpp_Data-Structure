// Given Q queries, check if the given number is present in the array or not.

// NOTE: Value of all elements in the array is less than 10 to the power of 5.
// scientific way to define 10 to the power of 5 => 1e5 + 10 ;

#include<iostream>
#include<vector>
using namespace std;

int main ()
{

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the "<<n<<" element into the array"<<endl;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    const int N = 1e5 + 10;
    vector<int> freq(N,0);  // created vector name is freq. it's size of N and initialize the vector with zero of all the elements..
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    cout<<"Enter queries: ";
    int q;
    cin>>q;

    while(q--){
        int queryelement;
        cout<<"Enter the element for search in the array: ";
        cin>>queryelement;
        cout<<freq[queryelement]<<endl;
    }



    return 0;
}