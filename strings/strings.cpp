#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Sonu";
    string str2 = "KumarBirendraPrasad";
    
    string result="";
    
    int m = str.length();
    int n = str2.size();
    
    int j=0; 
    
    for(int i = 0; i <m; i++) {
        result += str[i];
        if(n>j) {
            result += str2[j];
        }
        j++;
    }
    
    for(int i=j; i<n; i++) {
        result += str2[i];
    }
    cout<<result;
    return 0;
}