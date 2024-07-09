#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Sonu Kumar learning";
    int n= str.length();
    vector<char>res;
    int i = 0;
    
    while(i<n) {
        if(str[i] != ' '){
            res.push_back(str[i]);
        } 
        else {
            for(int i=res.size()-1; i>=0; i--) {
                cout << res[i];
            }
            cout <<' ';
            res.clear();
        }
        i++;
    }
    int restEle = res.size();
    if(restEle>0){
        for(int j=restEle-1; j>=0; j--){
            cout << res[j];
        }
    }
    
    return 0;
}