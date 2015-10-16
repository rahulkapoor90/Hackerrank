#include <iostream>
#include <cstdio>
using namespace std;

int main() {
       int a,b;
    cin>>a>>b;
    for(int x=a;x<=b;++x){
 
    if( x==1)
        cout<<"one\n";
    else
        if( x==2)
            cout<<"two\n";
        else
            if( x==3)
        cout<<"three\n";
        else
        if(x==4)
        cout<<"four\n";
        else
        if(x==5)
        cout<<"five\n";
        else
        if(x==6)
        cout<<"six\n";
        else
        if(x==7)
        cout<<"seven\n";
        else
        if(x==8)
        cout<<"eight\n";
        else
        if(x==9)
        cout<<"nine\n";
        else
        if( x%2==0)
        cout<<"even\n"; else cout<<"odd\n";
        }
        cout<<endl;
 return 0;
}
