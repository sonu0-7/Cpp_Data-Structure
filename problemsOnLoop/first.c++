// Find the sum of digits in a given number n

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int sum=0;

    while(n>0){
        int lastdigit=n%10;
        sum+=lastdigit;
        n/=10;
    }

    cout<<"Sum of given number is: "<<sum;


    return 0;
}