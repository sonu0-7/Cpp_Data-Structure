// write a program to display multiplication of two matrices entered by the user.
#include<iostream>
using namespace std;

int main()
{

    int r1, c1;
    cin>>r1>>c1;

    int A[r1] [c1];
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c1; j++){
            cin>>A[i] [j];
        }
    }

    int r2, c2;
    cin>>r2>>c2;

    int B[r2] [c2];
    for(int i=0; i<r2; i++) {
        for(int j=0; j<c2; j++) {
            cin>>B[i] [j];
        }
    }

    if(c1 != r2 || r1 != c2){
        cout<<" Matrix multiplication not possible for this input";
    }

    int C[r1] [c2];

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++) {
            int value=0;
            for(int k=0; k<r2; k++) {   // c1 == r2, 1st matrix column's should be the equal of 2nd matrix row then will be result possible..
                value+=A[i] [k]*B[k] [j];
            }
            C[i] [j]=value;
        }
    }

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<<C[i] [j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}