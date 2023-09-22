// find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int array[] = {1,2,3,4,5,6};

    int ansSum=0;
    for(int i=0; i<6; i++){
        if(i%2==0){
            ansSum +=array[i];
        }
        else {
            ansSum -=array[i];
        }
    }

    cout<<ansSum<<endl;

    return 0;
}