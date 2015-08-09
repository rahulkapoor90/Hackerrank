#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int letterMystery(string &str){
    int changes = 0;
     
    int mid = str.length()/2;
    int len = str.length();
     
    for (int i=0; i < mid; i++){
        int diff = abs(int(str.at(i)) - int(str.at(len-i-1)));
        changes += diff;
    }
     
    return changes;
}
int main() {
    string str;
    int t;
    cin>>t;
    for (int i=0;i<t;i++) {
        cin>>str;
        cout << letterMystery(str) << endl;
  }
  return 0;
}
