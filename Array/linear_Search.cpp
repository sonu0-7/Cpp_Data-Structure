// search if a given element is present in the array of not. if it is not present then return -1 else return the index.

#include<iostream>
using namespace std;

int main(){

    int array[]={3,9,18,11,7};
    int key=11;

    int ans=-1;

    for(int i=0; i<5; i++){
        if(array[i]==key){
            ans=i;
            break;
        }
    }

    cout<<ans<<endl;

    return 0;
}