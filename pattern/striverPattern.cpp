#include<bits/stdc++.h>
using namespace std;

void print10(int n) {
    for(int i = 1; i <= 2*n-1; i++) {
        int stars = i;
        if(i > n) stars = 2*n-i;
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print11(int n) {
    int start = 1;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void print12(int n) {
    int space = 2*(n-1);
    for(int i = 1; i <= n; i++) {
        // number
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        // space
        for(int j = 1; j <= space; j++) {
            cout << " ";
        }
        // number
        for(int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

void print13(int n) {
    int num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num += 1;
        } cout << endl;
    }
} 

void print14(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch <= 'A'+i; ch++) {
            cout << ch << " ";
        } cout << endl;
    }
} 

void prin15(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print16(int n) {
    for(int i = 0; i < n; i++){
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++){
            cout << ch << " ";
        }cout << endl;
    }
}

void print17(int n) {
    for(int i = 0; i < n; i++) {
        // space
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        // character
        char ch = 'A';
        int breakPoint = (2*i+1) / 2;
        for(int j = 1; j <= 2*i + 1; j++) {
            cout << ch;
            if(j <= breakPoint) ch++;
            else ch--;
        }
        // space
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        } cout << endl;
    }
}

void print18(int n) {
    
}

int print20(int n) {
    int spaces = 2*n - 2;
    for(int i = 1; i<= 2*n-1; i++) {
        int stars = i;
        if(i > n) stars = 2*n -i;
        // stars
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }
        // spaces
        for(int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        // stars
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
        if(i < n) spaces -= 2;
        else spaces += 2;
    }
}

int main() {
    cout<<"Enter the number Queries: ";
    int t;
    cin >> t;

    int n;
    for(int i = 0; i < t; i++) {
        cout << "Enter the number: ";
        cin >> n;
        print20(n);
    }

    return 0;
}