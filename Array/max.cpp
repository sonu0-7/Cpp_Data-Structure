#include<iostream>
using namespace std;

int main(){

    int array[] = {3,7,10,2,15,98,97};
    int size = sizeof(array)/sizeof(array[0]);
    int max=0;
    for(int i=0; i<size; i++){
        if(array[i]>=max){
            max = array[i];
        }
    }

    cout<<"Max value out of all element in array: "<<max<<endl;

    return 0;
}