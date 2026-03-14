#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[], int l, int q, int r){
    vector<int> v;
    int left = l;
    int right =q+1;
    while(left<=q && right <= r){
        if(arr[left]<arr[right])    v.emplace_back(arr[left++]);
        else    v.emplace_back(arr[right++]);
    }
    while(left <= q)    v.emplace_back(arr[left++]);
    while(right<=r)    v.emplace_back(arr[right++]);

    for(int i=l; i<=r;i++){
        arr[i] = v[i-l];
    }



}
void mergeSort(int arr[],int l, int r){
    if(l >= r) return;
    int q = (l+r)/2;
    mergeSort(arr,l, q);
    mergeSort(arr,q+1,r);
    merge(arr, l, q, r);
}



int main(){
    int arr[5] = {2,4,13,1,3};
    int n=5;
    mergeSort(arr,0, n-1);

    for(int i=0; i<n; i++)    cout<<arr[i]<<" ";
}