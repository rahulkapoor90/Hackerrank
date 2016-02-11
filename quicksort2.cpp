#include <bits/stdc++.h>
using namespace std;
int partition(int ar[],int left, int right){
    int pivot = ar[left];
    int b[1000], nb=0;
    for(int i=left+1;i<=right;i++){
        if(ar[i]<=pivot){
            b[nb++] = ar[i];
        }
    }
    b[nb++] = pivot;
    int idx = nb - 1 + left;
    for(int i=left+1;i<=right;i++){
        if(ar[i]>pivot){
            b[nb++]=ar[i];
        }
    }
    for(int i=left;i<=right;i++){
        ar[i] = b[i-left];
    }
    return idx;
}

void quickSort(int arr[],int left, int right){
    if(left < right){
        int p = partition(arr,left,right);
        quickSort(arr,left,p-1);
        quickSort(arr,p+1,right);
        
        for(int i=left;i<=right;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quickSort(arr,0,n-1);

    return 0;
}
