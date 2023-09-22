#include<iostream>
using namespace std;

int main(){

    // int x = 5;
    // int y = 10;
    // cout<<"Address of x "<<&x<<endl;
    // cout<<"Address of y "<<&y<<endl;

    // int array[5];
    // cout<<array[0]<<endl;
    // array[0]=5;
    // cout<<array[0]<<endl;
    // cout<<"sizeof "<<sizeof(array[0])<<endl;

    // int array[] = {1,2,3,4};
    // for(int idx=0; idx<4; idx++){
    //     cout<<array[idx]<<endl;
    // }

    // for(int ele: array){
    //     cout<<ele<<endl;
    // }

    char vowels[5];
    char n;
    cout<<"Enter the number for vowels : ";
    cin>>n;

    // char vowels[n];

    // // take the input using for loop
    // for(int idx=0; idx<5; idx++){
    //     cin>>vowels[idx];
    // }

    // take the input using foreach loop
    for(char &element:vowels){
        cin>>element;
    }
    
    for(int idx=0; idx<5; idx++){
        cout<<vowels[idx]<<" ";
    }

    return 0;
}