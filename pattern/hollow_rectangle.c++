#include<iostream>
using namespace std;

int main(){
    // int row, col;
    // cout<<"Enter the row and column ";
    // cin>>row>>col;

    int row = 5;
    int col = 4;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}