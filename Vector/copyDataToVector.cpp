#include<iostream>
#include<vector>
using namespace std;


int main(){

    int array[5] = {30, 20, 10, 50, 40};
    int size = sizeof(array)/sizeof(array[0]);

    //  10 20 30 40 50

    vector<int> v;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(array[i]<=array[j]){
                v[i++]=array[i];
            }else{
                v[i++]=array[j];
            }
        }
    }

    for(int i=0; i<v.size(); i++){
        array[i++]=v[i];
    }
    
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return 0;
}