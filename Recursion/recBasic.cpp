#include<bits/stdc++.h>
using namespace std;

void fun() {
    cout<<1<<endl;
    fun();
}

// Print Name 5 times
void name(int i, int n) {
    // Base Condition
    if(i>n) return;
    cout<<"Learn"<<endl;
    name(i+1, n);
}

// Print linearly from 1 to N
void number(int i, int n) {
    // Base Condition
    if(i>n) return;
    cout<<i<<endl;
    number(i+1, n);
}

// Print from N to 1
void nTo1(int i, int n) {
    // Base Condition
    if(i<1) return;
    cout << i << endl;
    nTo1(i-1, n);
}

// Print linearly from 1 to N ( But by Backtrack ) but you have not use i+1
void $1ToN_withOutIncrement(int i, int n) {
    // Base Condition
    if(i<1) return;
    $1ToN_withOutIncrement(i-1, n);
    cout << i << endl;
}

// Print from N to 1 (By Backtracking )
void nTo1WithoutDecrement(int i, int n) {
    // Base Condition
    if(i>n) return;
    nTo1WithoutDecrement(i+1, n);
    cout << i << endl;
}

int main() {
    // fun();
    cout<<"Enter the Number: ";
    int n;
    cin>>n;

    // name(1,n);
    // number(1,n);
    // nTo1(n,n);
    // $1ToN_withOutIncrement(n,n);
    nTo1WithoutDecrement(1,n);
    return 0;
}