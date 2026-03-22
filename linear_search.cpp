#include<bits/stdc++.h>
using namespace std;
int ls(int arr[], int find, int n){
    for(int i=0; i<n; i++){
        if(arr[i] == find)    return i;
    }
    return -1;
}
int main(){
    int arr[] = { 2,3,1,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int find = 3;
    int ansIndex = ls(arr, find, n);
    cout<<ansIndex;
}