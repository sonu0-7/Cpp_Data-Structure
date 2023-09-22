#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum = num1+num2;
    return sum;
}

int add(int num1, int num2, int num3){
    int sum = num1+num2+num3;
    return sum;
}

float add(float num1, float num2){
    float sum = num1+num2;
    return sum;
}

int main(){

    // int num1=5;
    // int num2=4;
    int num1, num2;
    
    cout<<"Enter the First Num: ";
    cin>>num1;

    cout<<"Enter the second Num: ";
    cin>>num2;

    float a=3.14;
    float b=5.61;

    cout<<add(a,b)<<endl;

    cout<<add(num1,num2)<<endl;

    return 0;
}