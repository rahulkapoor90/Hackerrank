#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[100];
int main() {
    int n,val;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>val;
        a[val]++;
    }   
      
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<a[i];j++)
        cout<<i<<" ";
    }
    cout<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
