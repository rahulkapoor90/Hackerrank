#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
   string a,b;
    cin>>a>>b;
    int len1 = a.size();
    int len2 = b.size();
    string c = a+b;
    cout<<len1<<" "<<len2<<"\n";
    cout<<c<<"\n";
    char d = a[0];
    a[0] = b[0];
    b[0] = d;
    cout<<a<<" "<<b;
    return 0;
}
