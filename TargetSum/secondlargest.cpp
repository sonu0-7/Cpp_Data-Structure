#include<iostream>
using namespace std;

int largestElementIndex(int array[], int size){
    int max=INT8_MIN;
    int maxIndex=-1;
    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
            maxIndex=i;
        }
    }

    return maxIndex;

}

int main(){

    int array[]={2,3,5,7,6,1};

    int indexoflargest=largestElementIndex(array, 6);
    cout<<array[indexoflargest]<<endl;

    array[indexoflargest]=-1;
    int indexofsecondlargest=largestElementIndex(array,6);
    cout<<array[indexofsecondlargest]<<endl;

    return 0;
}