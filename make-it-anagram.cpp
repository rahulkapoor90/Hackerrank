#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s1,s2;
    cin>>s1>>s2;
    int count1[26]={0},count2[26] = {0};
    long long ans=0;
    for(int i=0;i<s1.length();i++)
        count1[s1[i]-'a']++;
    for(int i=0;i<s2.length();i++)
        count2[s2[i]-'a']++;
    
    for(int i=0;i<26;i++)
    ans += abs(count1[i]-count2[i]);
    
    cout<<ans;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}