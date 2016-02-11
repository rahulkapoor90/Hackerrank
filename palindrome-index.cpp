#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool ispalin(string c){
    int i=0, len = c.length(), j=len-1;
    while(i<j){
        if(c[i]!=c[j]) return false;
        i++,j--;
    }
    return true;
}
int main() {
    int t;
    cin>>t;
    string s1;
    while(t--){
        cin>>s1;
        int i=0, len = s1.length(), j = len - 1;
        int ans = -1;
        while(i< j && s1[i] == s1[j]) i++, j--;
        if(i<j){
            string str1 = s1.substr(0,i) + s1.substr(i+1,s1.length() - i - 1);
            if(ispalin(str1)) ans = i;
            string str2 = s1.substr(0,j) + s1.substr(j+1,s1.length() - j -1);
            if(ispalin(str2)) ans = j;
        }
        cout<<ans<<"\n";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
