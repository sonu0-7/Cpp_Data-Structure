#include<iostream>
using namespace std;

int main(){

    int array[] = {3,4,6,7,1};
    int targetSum=7;

    int size=5;

    int pairs=0;
    int x=-1, y=-1;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){

            if(array[i]+array[j]==targetSum){
                pairs++;
                x=array[i];
                y=array[j];
                cout<<"("<<x<<","<<y<<")"<<" ";
            }
        }
    }
    cout<<endl;
    cout<<"Total number of pairs: "<<pairs<<endl;

    return 0;
}