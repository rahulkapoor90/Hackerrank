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

int partition(int *arr,int first, int last, int n){
    int i;
    int pivot = last;
    int idx = first;
    for(i=first;i<last;i++){
        if(arr[i]<arr[pivot]){
            swap(&arr[i],&arr[idx]);
            idx++;
        }
    }
    swap(&arr[pivot],&arr[idx]);
    return idx;
}
void quicksort(int *arr,int first,int last, int n){
    int p;
    if(first<last){
    p = partition(arr,first,last,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    quicksort(arr,first,p-1,n);
    quicksort(arr,p+1,last,n);
    }
    
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1,n);
    return 0;
}
