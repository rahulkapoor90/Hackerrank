#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int partition(int *a,int first,int last, int n,int *count){
    int pivot = last;
    int idx = first;
    for(int i=first;i<last;i++){
        if(a[i]<a[pivot]){
            swap(&a[i],&a[idx]);
            idx++;
            (*count)++;
        }
    }
    swap(&a[pivot],&a[idx]);
    (*count)++;
   return idx;
}
void quicksort(int *a,int first, int last, int n,int *count){
    if(first<last){
        int p = partition(a,first,last,n,count);
        quicksort(a,first,p-1,n,count);
        quicksort(a,p+1,last,n,count);
    }
}
void insertion(int *a,int n, int *count){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(a[j]<a[j-1]){
                swap(&a[j-1],&a[j]);
                (*count)++;
            }
        }
    }
}
int main() {
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
        
    }
    int quick = 0,insert = 0;
    quicksort(a,0,n-1,n, &quick);
    insertion(b,n,&insert);
    cout<<insert-quick;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
