#include<iostream>
using namespace std;

//  'cin>>' -> right shift operator
//  'cout<<' -> left shift operator

int main() {
    int n1, n2;
    cout<<"Enter the 2 number : ";
    cin>>n1>>n2;
    
    char op;
    cout<<"Enter the operator: ";
    cin>>op;
    
    switch(op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
        
    case '-':
        cout<<n1-n2<<endl;
        break;
        
    case '*':
        cout<<n1*n2<<endl;
        break;
        
    case '/':
        cout<<n1/n2<<endl;
        break;
        
    default:
        cout<<"enter another operator"<<endl;
    }

    return 0;
}