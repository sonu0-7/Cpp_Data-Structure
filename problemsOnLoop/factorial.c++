// Find the first n factorial numbers

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Calculate the number of factorial: ";
    cin>>n;

    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial *= i;
        
        cout<<factorial<<endl;
    }

    return 0;
}