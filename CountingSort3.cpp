#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,x;
    long long int arr[10000] = {0},sum=0;
    string s;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        cin>>s;
        arr[x]++;
        
    }
    i=0;
    while(i<100){
        sum += arr[i];
        cout<<sum<<" ";
        i++;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
