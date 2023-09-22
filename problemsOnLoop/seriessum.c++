// Find the sum of the following series
// s = 1 - 2 + 3 - 4..n

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int result=0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            result -= i;
        }
        else{
            result += i;
        }
    }

    cout<<"Sum : "<<result<<endl;


    return 0;
}